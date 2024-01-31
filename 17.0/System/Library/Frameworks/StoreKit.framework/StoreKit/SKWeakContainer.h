@class UIView;

@interface SKWeakContainer : NSObject

@property (weak, nonatomic) UIView *scrollingView;
@property (weak, nonatomic) UIView *trackingView;
@property (nonatomic) BOOL wasOnScreen;

- (void).cxx_destruct;

@end
