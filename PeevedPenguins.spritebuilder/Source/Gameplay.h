//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by Scotty Shaw on 6/25/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Gameplay : CCNode <CCPhysicsCollisionDelegate>

-(void)ccPhysicsCollisionPostSolve:(CCPhysicsCollisionPair *)pair seal:(CCNode *)nodeA wildcard:(CCNode *)nodeB;

@end
