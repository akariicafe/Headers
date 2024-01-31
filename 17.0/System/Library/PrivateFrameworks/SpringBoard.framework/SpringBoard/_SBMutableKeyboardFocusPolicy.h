@class _SBRecentlyUsedSceneIdentityCache, BKSHIDEventDeferringTarget, SBWindowScene, FBSSceneIdentityToken;

@interface _SBMutableKeyboardFocusPolicy : _SBKeyboardFocusPolicy

@property (retain, nonatomic) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (retain, nonatomic) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (weak, nonatomic) SBWindowScene *preferredSBFocusWindowScene;
@property (copy, nonatomic) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (nonatomic) long long advicePolicy;
@property (nonatomic) BOOL shouldSuppressRemoteDeferring;
@property (nonatomic) BOOL cameraIsHosted;

- (void)setCameraIsHosted:(BOOL)a0;
- (void)setOverrideSceneIdentityToken:(id)a0;
- (void)setAdvicePolicy:(long long)a0;
- (void)setShouldSuppressRemoteDeferring:(BOOL)a0;
- (void)setPreferredSBFocusWindowScene:(id)a0;
- (void)setKeyboardFocusTarget:(id)a0;
- (void)setRecentlyUsedScenes:(id)a0;

@end
