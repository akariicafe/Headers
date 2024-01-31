@class SBMainWorkspace, NSString, NSMutableArray;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {
    NSMutableArray *_completionTasks;
}

@property (readonly, nonatomic) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;
@property (retain, nonatomic) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;
@property (nonatomic) BOOL shouldPreventDismissalOfUnrelatedTransientOverlays;
@property (nonatomic, getter=isCrossingDisplays) BOOL crossingDisplays;
@property (nonatomic) long long centerConfiguration;
@property (retain, nonatomic) NSString *centerWindowSourceSceneID;
@property (copy, nonatomic) id /* block */ transactionProvider;
@property (copy, nonatomic) id /* block */ transactionConfigurator;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

+ (id)ancillaryTransitionRequestsForTransitionRequest:(id)a0;

- (id)addCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)copyMainWorkspaceTransitionRequest;
- (void)_invalidateCompletionTasks;
- (id)initWithDisplayConfiguration:(id)a0;
- (void)declineWithReason:(id)a0;
- (void)finalize;
- (BOOL)isMainWorkspaceTransitionRequest;
- (void)setTransientOverlayContext:(id)a0;
- (id)compactDescriptionBuilder;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)modifyTransientOverlayContext:(id /* block */)a0;

@end
