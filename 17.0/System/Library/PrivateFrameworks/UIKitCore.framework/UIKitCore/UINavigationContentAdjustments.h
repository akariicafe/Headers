@class UIScrollView;

@interface UINavigationContentAdjustments : NSObject

@property (weak, nonatomic) UIScrollView *adjustedScrollView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insetAdjustment;

- (void).cxx_destruct;

@end
