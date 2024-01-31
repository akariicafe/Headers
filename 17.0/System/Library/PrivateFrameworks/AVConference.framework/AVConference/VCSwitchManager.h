@interface VCSwitchManager : NSObject

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

- (id)description;
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)a0 negotiatedSwitches:(unsigned int)a1;
- (void)initializeLocalSwitches;
- (BOOL)isLocalSwitchEnabled:(unsigned int)a0;
- (BOOL)isSwitchEnabled:(unsigned int)a0;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:(BOOL)a0;
- (void)setRemoteSwitches:(unsigned int)a0 isCaller:(BOOL)a1;
- (void)setupLocalABTestSwitches;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalVideoTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;

@end
