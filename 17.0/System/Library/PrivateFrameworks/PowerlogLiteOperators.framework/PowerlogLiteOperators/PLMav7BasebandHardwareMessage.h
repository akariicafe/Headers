@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage

@property (nonatomic) struct _PLMav7BasebandHWStatsRFTech { unsigned int x0[6][4]; unsigned int x1[6][13]; unsigned int x2[6][13]; unsigned int x3[6][12]; unsigned int x4[6][11]; unsigned int x5[6][11]; } *rf;
@property (nonatomic) struct _PLMav7BasebandHWStatsProtocol { unsigned int x0[6][16]; unsigned int x1[6]; } *protocol;
@property (nonatomic) struct _PLMav7BasebandHWStatsMCPMVeto { unsigned int x0[6]; } *mcpm_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsNPAVeto { unsigned int x0; unsigned int x1[24]; } *npa_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *apps_clock_duration_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *mpss_clock_duration_mask;
@property (retain, nonatomic) NSMutableString *apps_clock_duration;
@property (retain, nonatomic) NSMutableString *mpss_clock_duration;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *apps_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *mpss_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsHSICState { unsigned int x0[8]; } *hsic;
@property (nonatomic) struct _PLMav7BasebandGPSDPOBin { unsigned int x0[6]; } *gps_dpo_bins;

- (void)logWithLogger:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)parseData:(id)a0;
- (void).cxx_destruct;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0 oftype:(int)a1 withData:(char *)a2;
- (id)indexToRAT:(unsigned long long)a0;
- (void)logAPPSWithLogger:(id)a0;
- (void)logClockWithLogger:(id)a0;
- (void)logHSICWithLogger:(id)a0;
- (void)logMPSSWithLogger:(id)a0;
- (void)logPeripheralsWithLogger:(id)a0;
- (void)logProtocolActiveWithLogger:(id)a0;
- (void)logRFWithLogger2:(id)a0;
- (void)logSleepVetoWithLogger:(id)a0;

@end
