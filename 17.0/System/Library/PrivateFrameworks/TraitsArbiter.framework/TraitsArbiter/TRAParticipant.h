@class TRAPreferencesZOrderLevel, NSString, TRAUserInterfaceStyleResolutionPolicyInfo, TRAOrientationResolutionPolicyInfo, TRAArbiter, TRASettingsActuationContext, TRASettings, TRAPreferencesOrientation;
@protocol TRAParticipantDelegate, BSInvalidatable;

@interface TRAParticipant : NSObject <TRAPreferencesUpdating, TRASettingsActuationContextProviding, TRAPreferencesProviding, TRAResolutionPoliciesProviding, TRASettingsUpdating, NSCopying, BSInvalidatable, BSDescriptionProviding, TRASettingsProviding> {
    BOOL _invalidated;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (weak, nonatomic) id<TRAParticipantDelegate> delegate;
@property (weak, nonatomic) TRAArbiter *arbiter;
@property (retain, nonatomic) TRAPreferencesZOrderLevel *zOrderLevelPreferences;
@property (retain, nonatomic) TRAPreferencesOrientation *orientationPreferences;
@property (retain, nonatomic) TRASettings *currentSettings;
@property (retain, nonatomic) TRASettings *previousSettings;
@property (nonatomic) BOOL _debugDelegateDidValidateLastSettings;
@property (copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) TRASettingsActuationContext *orientationActuationContext;
@property (readonly, copy, nonatomic) TRASettingsActuationContext *userInterfaceStyleActuationContext;
@property (copy, nonatomic) TRAOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo;
@property (copy, nonatomic) TRAUserInterfaceStyleResolutionPolicyInfo *userInterfaceStyleResolutionPolicyInfo;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (long long)currentOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (long long)currentDeviceOrientation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)previousOrientation;
- (long long)currentAmbientDisplayStyle;
- (long long)currentAmbientPresentedFlag;
- (long long)currentUserInterfaceStyle;
- (double)currentZOrderLevel;
- (long long)previousAmbientDisplayStyle;
- (long long)previousAmbientPresentedFlag;
- (long long)previousDeviceOrientation;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 animate:(BOOL)a1;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1 animate:(BOOL)a2;
- (void)updateAmbientPresentationSettingsWithBlock:(id /* block */)a0;
- (void)updateOrientationPreferencesWithBlock:(id /* block */)a0;
- (void)updateOrientationSettingsWithBlock:(id /* block */)a0;
- (void)updatePreferencesIfNeeded;
- (void)updateUserInterfaceOrientationSettingsWithBlock:(id /* block */)a0;
- (void)updateZOrderLevelPreferencesWithBlock:(id /* block */)a0;
- (void)updateZOrderLevelSettingsWithBlock:(id /* block */)a0;
- (id)_setupStateDump;
- (BOOL)hasAnyActuationContext;
- (id)initWithRole:(id)a0 uniqueIdentifier:(id)a1 delegate:(id)a2 arbiter:(id)a3;
- (long long)previousUserInterfaceStyle;
- (double)previousZOrderLevel;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1;

@end
