@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BNConsideringDelegate;

@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering> {
    NSMutableDictionary *_requesterIDsToAuthorities;
    NSMutableDictionary *_sinks;
    NSObject<OS_dispatch_queue> *_biomeQueue;
    BOOL _isConfiguringSinks;
}

@property (getter=_isScreenSharingActive, setter=_setScreenSharingActive:) BOOL screenSharingActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNConsideringDelegate> delegate;

- (id)init;
- (long long)_mediatedDecisionFromDecisions:(id)a0 defaultDecision:(long long)a1;
- (void)bannerAuthority:(id)a0 mayChangeDecisionForResponsiblePresentable:(id)a1;
- (BOOL)_shouldDropPresentableDuringScreenSharing:(id)a0 userInfo:(id)a1;
- (BOOL)_shouldDropPresentablesDuringScreenSharing;
- (long long)shouldOverlapPresentable:(id)a0 withPresentable:(id)a1;
- (void)_configureSinksIfNecessary;
- (long long)shouldPostPresentable:(id)a0 userInfo:(id)a1 reason:(out id *)a2;
- (void)registerAuthority:(id)a0 forRequesterIdentifier:(id)a1;
- (void).cxx_destruct;
- (long long)shouldPresentPresentable:(id)a0 withPresentedPresentables:(id)a1 responsiblePresentable:(out id *)a2;

@end
