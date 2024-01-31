@class NSString, ASOOverlayTransitionContext, NSObject, ASCSignpostSpan;
@protocol OS_os_log, ASORemoteContextProvider, ASOOverlayConfiguration, ASOOverlay;

@interface ASORemoteOverlay : NSObject <ASORemoteAppOverlayDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) ASOOverlayTransitionContext *presentationTransitionContext;
@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider;
@property (retain, nonatomic) id<ASOOverlay> overlay;
@property (readonly, retain, nonatomic) ASCSignpostSpan *hostSpan;
@property (readonly, copy, nonatomic) id<ASOOverlayConfiguration> overlayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dismissOverlayOperationWithContextProvider:(id)a0;

- (id)context;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithOverlay:(id)a0 contextProvider:(id)a1 hostSpan:(id)a2;
- (id)presentOverlayOperation;
- (void)remoteStoreOverlayDidFailToLoadWithError:(id)a0;
- (void)remoteStoreOverlayDidFinishDismissal:(id)a0;
- (void)remoteStoreOverlayDidFinishPresentation:(id)a0;
- (void)remoteStoreOverlayWillStartDismissing:(id)a0 executeBlock:(id /* block */)a1;
- (void)remoteStoreOverlayWillStartPresenting:(id)a0 executeBlock:(id /* block */)a1;

@end
