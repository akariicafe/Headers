@class NSString, _UIAsyncInvocation, UIView, _UITextDragCaretView, UIViewController;
@protocol UIKeyboardMediaControllerDelegate;

@interface UIKeyboardMediaController : NSObject <UIKeyboardMediaServiceRemoteViewControllerDelegate> {
    UIViewController *_remoteCardViewController;
    _UIAsyncInvocation *_remoteCardViewControllerRequest;
    UIViewController *_recentlyUsedMediaViewController;
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;
    UIView *_targetViewAwaitingRecents;
    BOOL _hasRequestedRecentlyUsedMediaViewController;
    unsigned long long _viewServiceTerminationCount;
    _UITextDragCaretView *_dropCaret;
}

@property (weak, nonatomic) id<UIKeyboardMediaControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldRetryFetchingRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedKeyboardMediaController;

- (void)prefetchRecentsViewControllerWithCompletion:(id /* block */)a0;
- (void)_setRecentlyUsedMediaViewControllerHostBundleID;
- (void)presentCard;
- (void)_didInsertMedia;
- (void)handleStickerSuggestionWithTISticker:(id)a0;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)_tearDownRemoteViews;
- (void)showRecentlyUsedMediaInView:(id)a0;
- (BOOL)shouldPrefetchRemoteView;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(id /* block */)a0;
- (void)_keyboardDidChangeFrame:(id)a0;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)a0;
- (void)dismissCardAnimated;
- (BOOL)remoteHandlesRecentsStickerDonation;
- (void)_displayiMessageAppWithID:(id)a0;
- (void)_instantiateCardFromViewService;
- (void)releaseRecentlyUsedMediaViewIfNeeded;
- (void)_didPresentCard;
- (BOOL)_stickerIsSupportedPayload;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_embedRecentlyUsedMediaViewInView:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissCardIfNeeded;
- (void)dismissCard;
- (void)stageStickerWithIdentifier:(id)a0 representations:(id)a1 name:(id)a2 externalURI:(id)a3 accessibilityLabel:(id)a4;
- (void)stickerPickerCardDidLoad;
- (void)stageSticker:(id)a0;
- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (BOOL)recentsViewWillBeVisible;

@end
