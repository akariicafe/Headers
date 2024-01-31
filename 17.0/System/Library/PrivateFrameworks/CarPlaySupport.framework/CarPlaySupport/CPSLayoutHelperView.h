@protocol CPSLayoutHelperViewDelegate;

@interface CPSLayoutHelperView : UIView

@property (weak, nonatomic) id<CPSLayoutHelperViewDelegate> layoutDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
