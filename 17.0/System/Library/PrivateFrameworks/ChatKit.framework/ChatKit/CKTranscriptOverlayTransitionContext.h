@class NSDictionary, NSString, CKInlineReplyTransitionProperties;

@interface CKTranscriptOverlayTransitionContext : NSObject

@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap;
@property (copy, nonatomic) NSString *anchorChatItemGUID;
@property (copy, nonatomic) CKInlineReplyTransitionProperties *replyTransitionProperties;
@property (nonatomic) BOOL wantsModalPresentation;
@property (nonatomic) BOOL wantsUnanimatedPresentation;
@property (nonatomic) BOOL presentWithKeyboard;
@property (nonatomic) BOOL keyboardWasUpInMainTranscript;
@property (nonatomic) long long navBarContext;
@property (nonatomic) BOOL isParentChatControllerShowingBanner;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } transcriptMarginInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } transcriptSafeAreaInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } parentCollectionViewFrame;

- (id)description;
- (void).cxx_destruct;

@end
