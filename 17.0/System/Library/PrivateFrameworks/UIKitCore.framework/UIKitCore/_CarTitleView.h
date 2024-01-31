@class NSString, NSArray, UIView;

@interface _CarTitleView : UIView

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL largeText;
@property (retain, nonatomic) NSArray *extraConstraints;

- (void)_updateLayout;
- (void)_updateText;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
