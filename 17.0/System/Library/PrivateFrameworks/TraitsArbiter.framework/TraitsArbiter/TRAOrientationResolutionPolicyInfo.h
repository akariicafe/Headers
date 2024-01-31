@class NSString, NSArray, NSDictionary, TRASettingsActuationContext;

@interface TRAOrientationResolutionPolicyInfo : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) long long resolutionPolicy;
@property (readonly, copy, nonatomic) NSString *associatedParticipantUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedParticipantRole;
@property (readonly, copy, nonatomic) NSArray *associatedDeviceOrientationStateTypes;
@property (readonly, copy, nonatomic) NSDictionary *associatedDeviceOrientationStateTypesBySupportedOrientationMask;
@property (nonatomic) BOOL forceResolution;
@property (copy, nonatomic) TRASettingsActuationContext *actuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionPolicyInfoDeviceOrientation;
+ (id)resolutionPolicyInfoDeviceOrientationWithStateTypes:(id)a0;
+ (id)resolutionPolicyInfoDeviceOrientationWithStateTypesBySupportedOrientationMask:(id)a0;
+ (id)resolutionPolicyInfoForAssociatedParticipantWithRole:(id)a0;
+ (id)resolutionPolicyInfoForAssociatedParticipantWithUniqueID:(id)a0;
+ (id)resolutionPolicyInfoIsolation;
+ (id)resolutionPolicyInfoOrientationBelow;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithRole:(id)a0;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithUniqueID:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResolutionPolicy:(long long)a0;
- (id)initWithResolutionPolicy:(long long)a0 associatedAccStateTypes:(id)a1;
- (id)initWithResolutionPolicy:(long long)a0 associatedAccStateTypesByMask:(id)a1;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantRole:(id)a1;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantUniqueID:(id)a1;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantUniqueID:(id)a1 associatedParticipantRole:(id)a2 associatedAccStateTypes:(id)a3;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantUniqueID:(id)a1 associatedParticipantRole:(id)a2 associatedAccStateTypes:(id)a3 associatedAccStateTypesByMask:(id)a4;
- (id)initWithResolutionPolicyInfo:(id)a0;
- (void)setAssociatedDeviceOrientationStateTypes:(id)a0;

@end
