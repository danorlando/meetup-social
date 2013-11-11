//
//  MeetupManager.m
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//

#import "MeetupManager.h"

#import "GroupBuilder.h"
#import "MeetupCommunicator.h"

@implementation MeetupManager
- (void)fetchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate
{
    [self.communicator searchGroupsAtCoordinate:coordinate];
}

#pragma mark - MeetupCommunicatorDelegate

- (void)receivedGroupsJSON:(NSData *)objectNotation
{
    NSError *error = nil;
    NSArray *groups = [GroupBuilder groupsFromJSON:objectNotation error:&error];
    
    if (error != nil) {
        [self.delegate fetchingGroupsFailedWithError:error];
        
    } else {
        [self.delegate didReceiveGroups:groups];
    }
}

- (void)fetchingGroupsFailedWithError:(NSError *)error
{
    [self.delegate fetchingGroupsFailedWithError:error];
}
@end
