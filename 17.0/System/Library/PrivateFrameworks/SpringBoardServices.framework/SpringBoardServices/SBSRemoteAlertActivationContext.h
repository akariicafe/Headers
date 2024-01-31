@class NSString, NSDictionary, NSSet, NSUUID, SBSRemoteAlertPresentationTarget;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *legacyAlertOptions;
@property (nonatomic) BOOL shouldInvalidateWhenDeactivated;
@property (nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (nonatomic) long long presentationMode;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri;
@property (nonatomic) BOOL shouldDismissPresentedBanners;
@property (nonatomic) BOOL shouldStashPictureInPictureIfNeeded;
@property (copy, nonatomic) NSSet *actions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSUUID *activityContinuationIdentifier;
@property (nonatomic) unsigned long long initialSupportedInterfaceOrientations;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activationContextWithLegacyAlertOptions:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActions:(id)a0;
- (id)initWithActions:(id)a0 presentationTarget:(id)a1;
- (id)initWithActions:(id)a0 presentationTarget:(id)a1 userInfo:(id)a2;

@end
