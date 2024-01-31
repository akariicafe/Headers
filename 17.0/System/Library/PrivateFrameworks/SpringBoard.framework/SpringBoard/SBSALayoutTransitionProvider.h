@class NSString, SBSABasePreferencesProvider;
@protocol SBSAElementLayoutModeSupporting;

@interface SBSALayoutTransitionProvider : SBSABasePreferencesProvider <SBSAElementLayoutModeTransitioning> {
    SBSABasePreferencesProvider<SBSAElementLayoutModeSupporting> *_previousLayoutProvider;
    SBSABasePreferencesProvider<SBSAElementLayoutModeSupporting> *_targetLayoutProvider;
    BOOL _awaitingCollision;
}

@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;
@property (readonly, nonatomic) long long previousElementLayoutMode;
@property (readonly, nonatomic) long long targetElementLayoutMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_elementLayoutModeSupportingChildProvider;
- (void)_ensureChildMitosisProviderExists:(BOOL)a0 forBabyElementIdentifier:(id)a1;
- (void)_ensureChildRecombinationProviderExists:(BOOL)a0;
- (BOOL)_isMitosisProviderRequiredForTransitionFromLayoutMode:(long long)a0 toLayoutMode:(long long)a1;
- (BOOL)_isRecombinationProviderRequiredForTransitionFromLayoutMode:(long long)a0 toLayoutMode:(long long)a1;
- (id)_layoutProviderForLayoutMode:(long long)a0;
- (id)preferencesFromContext:(id)a0;

@end
