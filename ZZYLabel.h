//
//  ZZYLabel.h
//  QianDW
//
//  Created by Ziyang Zhang on 16/3/14.
//  Copyright © 2016年 Ziyang Zhang. All rights reserved.
//

//This code is use to show outline text.If you want to more effect, please feel free to let me know.

#import <UIKit/UIKit.h>

@interface ZZYLabel : UILabel

/**
 *	@brief	Outline Color
 */
@property (nonatomic, retain) UIColor *outlineColor;
/**
 *	@brief	Outline Width
 */
@property (nonatomic, assign) CGFloat outlineWidth;

@end
