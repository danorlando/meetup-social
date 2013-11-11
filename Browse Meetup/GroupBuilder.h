//
//  GroupBuilder.h
//  BrowseMeetup
//
//  Created by Dan Orlando on 11/11/13.
//
//

#import <Foundation/Foundation.h>

@interface GroupBuilder : NSObject

+ (NSArray *)groupsFromJSON:(NSData *)objectNotation error:(NSError **)error;

@end