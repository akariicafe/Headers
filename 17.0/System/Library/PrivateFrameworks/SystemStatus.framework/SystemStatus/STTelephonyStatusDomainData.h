@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STTelephonyStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (readonly, nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled;
@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly, nonatomic, getter=isUsingStewieForSOS) BOOL usingStewieForSOS;
@property (readonly, nonatomic, getter=isInactiveSOSEnabled) BOOL inactiveSOSEnabled;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
