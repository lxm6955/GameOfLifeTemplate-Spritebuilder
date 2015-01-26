//
//  Grid.h
//  GameOfLife
//
//  Created by Himo on 15/1/22.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface CCSprite (Grid)

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;


@end
