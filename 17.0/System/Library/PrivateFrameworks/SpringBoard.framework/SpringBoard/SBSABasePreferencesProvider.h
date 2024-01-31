@class NSString, SBSystemApertureTransitionSettings, NSMutableArray, SBSystemApertureSettings;
@protocol SBSAStackablePreferencesProviding;

@interface SBSABasePreferencesProvider : NSObject <SBSAStackablePreferencesProviding> {
    NSMutableArray *_childProviders;
}

@property (class, readonly, copy, nonatomic) SBSystemApertureSettings *settings;

@property (readonly, copy, nonatomic) SBSystemApertureTransitionSettings *defaultTransitionSettings;
@property (readonly, weak, nonatomic) id<SBSAStackablePreferencesProviding> parentProvider;
@property (retain, nonatomic) id<SBSAStackablePreferencesProviding> childProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newAnimatedTransitionDescriptionWithBehaviorSettings:(id)a0;
+ (id)newUnanimatedTransitionDescription;

- (id)init;
- (void).cxx_destruct;
- (id)behaviorSettingsForProperty:(id)a0;
- (id)descriptionForStackDepiction;
- (id)firstChildPreferenceProviderOfClass:(Class)a0;
- (id)firstChildPreferenceProviderRespondingToSelector:(SEL)a0;
- (id)initWithParentProvider:(id)a0;
- (id)newAnimatedTransitionDescriptionForProperty:(id)a0;
- (id)newAnimatedTransitionDescriptionForProperty:(id)a0 animated:(BOOL)a1;
- (id)preferencesFromContext:(id)a0;
- (void)removeFromParentProvider;
- (id)stackDepiction;

@end
