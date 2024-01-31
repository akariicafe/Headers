@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled;
@property (nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (nonatomic, getter=isUsingStewieForSOS) BOOL usingStewieForSOS;
@property (nonatomic, getter=isInactiveSOSEnabled) BOOL inactiveSOSEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void)updateSIMTwoInfoWithBlock:(id /* block */)a0;
- (void)updateSIMOneInfoWithBlock:(id /* block */)a0;
- (void)setUsingStewieForSOS:(BOOL)a0;
- (void)setSIMOneInfo:(id)a0;
- (void)setRadioModuleDead:(BOOL)a0;
- (void)setInactiveSOSEnabled:(BOOL)a0;
- (void)setSIMTwoInfo:(id)a0;
- (void)setCellularRadioCapabilityEnabled:(BOOL)a0;
- (void)setDualSIMEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
