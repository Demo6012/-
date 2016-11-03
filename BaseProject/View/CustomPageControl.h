//
//  CustomPageControl.h
//  BaseProject
//
//  Created by AHJD-04 on 16/10/18.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 自定义UIPageControl圆点大小、以图片展示
 */
@interface CustomPageControl : UIPageControl
/**
 *  如果直接使用init初始化、可以手动定义以下属性
 *  其中pageSize为空则跟随图片size
 */
@property (nonatomic)   UIImage * currentImage; //高亮图片
@property (nonatomic)   UIImage * defaultImage; //默认图片
@property (nonatomic,assign)   CGSize pageSize; //图标大小


-(instancetype)initWithcurrentImage:(UIImage *)currentImage andDefaultImage:(UIImage *)defaultImage ;

//-(void) updateDots;


@end
