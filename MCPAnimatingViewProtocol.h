//
//  MCPAnimatingViewProtocol.h
//  LexusLoyalty
//
//  Created by Mario Chinchilla PlanetMedia on 5/11/15.
//  Copyright © 2015 Mario. All rights reserved.
//

@protocol MCPAnimatingViewProtocol <NSObject>
-(void)startAnimating;
-(void)stopAnimating;

@property (nonatomic, assign, readonly) BOOL isAnimating;
@end
