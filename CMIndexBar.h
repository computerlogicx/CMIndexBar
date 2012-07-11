//
//  indexBar.h
//
//  Created by Craig Merchant on 07/04/2011.
//  Copyright 2011 RaptorApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuartzCore/QuartzCore.h"

@protocol CMIndexBarDelegate;

@interface CMIndexBar : UIView

- (id)init;

- (id)initWithFrame:(CGRect)frame;

- (void)setIndexes:(NSArray *)indexes;

- (void)clearIndex;

@property (nonatomic, unsafe_unretained) id <CMIndexBarDelegate> delegate;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIColor *textColor;

@end

@protocol CMIndexBarDelegate <NSObject>
@optional
- (void)indexSelectionDidChange:(CMIndexBar *)indexBar index:(NSInteger)index title:(NSString *)title;
@end