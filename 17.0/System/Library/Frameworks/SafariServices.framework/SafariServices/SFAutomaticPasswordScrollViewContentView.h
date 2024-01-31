@protocol SFAutomaticPasswordScrollViewContentViewLayoutObserver;

@interface SFAutomaticPasswordScrollViewContentView : UIView

@property (weak, nonatomic) id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> layoutObserver;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
