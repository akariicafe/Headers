@class NSString, NSMapTable, _UIRemoteViewController, NSMutableArray;
@protocol SBHRecentsDocumentExtensionWrappingViewControllerDelegate;

@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController <SBHRecentsDocumentExtensionViewControlling> {
    NSMutableArray *_constraints;
    NSMapTable *_touchCancellationAssertionsToTokens;
}

@property (weak, nonatomic) id<SBHRecentsDocumentExtensionWrappingViewControllerDelegate> delegate;
@property (nonatomic) BOOL usesIntrinsicContentSizeBasedOnScreenSize;
@property (readonly, nonatomic) _UIRemoteViewController *wrappedRemoteViewController;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_updateViewIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)wrapRemoteViewController:(id)a0;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;

@end
