@class CALayer;

@interface UIWebOverflowContentView : UIView

@property (retain, nonatomic) CALayer *webLayer;

- (void)dealloc;
- (id)initWithLayer:(id)a0;
- (void)_setCachedSubviews:(id)a0;
- (void)fixUpViewAfterInsertion;
- (void)replaceLayer:(id)a0;
- (id)superview;
- (void)willBeRemoved;

@end
