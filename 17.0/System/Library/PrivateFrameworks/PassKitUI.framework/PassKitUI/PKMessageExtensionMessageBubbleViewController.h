@class PKMessageExtensionMessageBubbleView;
@protocol PKMessageExtensionMessageBubbleViewControllerDelegate;

@interface PKMessageExtensionMessageBubbleViewController : UIViewController {
    id<PKMessageExtensionMessageBubbleViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) PKMessageExtensionMessageBubbleView *bubbleView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)didDoubleTapMessage;
- (void)didLongPressMessage;
- (void)didTapMessage;
- (double)heightThatFitsWidth:(double)a0;

@end
