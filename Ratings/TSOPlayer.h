//
//  TSOPlayer.h
//  Ratings
//
//  Created by Arnaud Christ on 23/10/13.
//  Copyright (c) 2013 com.thesuitedowl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TSOPlayer : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
