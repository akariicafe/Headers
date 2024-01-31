@class LAPSPasscodeOptionsViewControllerConfiguration, UIViewController, UIView;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

@interface LAPSPasscodeOptionsPresentationRequest : NSObject

@property (readonly, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) LAPSPasscodeOptionsViewControllerConfiguration *config;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) id<LAPSPasscodeOptionsViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithSourceViewController:(id)a0;

@end
