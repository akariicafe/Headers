@class NSString, NSArray, SBSAElementLayoutTransition;
@protocol SBSAStackablePreferencesProviding;

@interface SBSARootPreferencesProvider : SBSABasePreferencesProvider <SBSAStackablePreferencesProviding> {
    BOOL _configuredInitialStack;
    NSArray *_previouslyVisibleElements;
    SBSAElementLayoutTransition *_lastChangingElementLayoutTransition;
}

@property (readonly, weak, nonatomic) id<SBSAStackablePreferencesProviding> parentProvider;
@property (retain, nonatomic) id<SBSAStackablePreferencesProviding> childProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_handleBounceRequest:(id)a0;
- (BOOL)_handleEjectRequest:(id)a0;
- (BOOL)_handlePulseRequest:(id)a0;
- (void)_handleRequests:(id)a0;
- (BOOL)_handleShakeRequest:(id)a0;
- (void)_updateDynamicsSessionProviders:(id)a0;
- (id)initWithParentProvider:(id)a0;
- (id)preferencesFromContext:(id)a0;
- (void)removeFromParentProvider;

@end
