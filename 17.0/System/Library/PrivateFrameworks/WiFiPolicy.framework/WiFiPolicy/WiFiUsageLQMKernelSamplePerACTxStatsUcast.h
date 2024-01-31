@interface WiFiUsageLQMKernelSamplePerACTxStatsUcast : WiFiUsageLQMKernelSamplePerACTxStats

@property (readonly, nonatomic) unsigned long long txBE;
@property (readonly, nonatomic) unsigned long long txBESuccessPerc;
@property (readonly, nonatomic) unsigned long long txBEAllFailPerc;
@property (readonly, nonatomic) unsigned long long txBEDroppedPerc;
@property (readonly, nonatomic) unsigned long long txBENoBuffPerc;
@property (readonly, nonatomic) unsigned long long txBENoResPerc;
@property (readonly, nonatomic) unsigned long long txBENoAckPerc;
@property (readonly, nonatomic) unsigned long long txBEChipModeErrPerc;
@property (readonly, nonatomic) unsigned long long txBEExpiredPerc;
@property (readonly, nonatomic) unsigned long long txBEFailPerc;
@property (readonly, nonatomic) unsigned long long txBEFwFreePerc;
@property (readonly, nonatomic) unsigned long long txBEMaxRetriesPerc;
@property (readonly, nonatomic) unsigned long long txBEForceExpirePerc;
@property (readonly, nonatomic) unsigned long long txBK;
@property (readonly, nonatomic) unsigned long long txBKSuccessPerc;
@property (readonly, nonatomic) unsigned long long txBKAllFailPerc;
@property (readonly, nonatomic) unsigned long long txBKDroppedPerc;
@property (readonly, nonatomic) unsigned long long txBKNoBuffPerc;
@property (readonly, nonatomic) unsigned long long txBKNoResPerc;
@property (readonly, nonatomic) unsigned long long txBKNoAckPerc;
@property (readonly, nonatomic) unsigned long long txBKChipModeErrPerc;
@property (readonly, nonatomic) unsigned long long txBKExpiredPerc;
@property (readonly, nonatomic) unsigned long long txBKFailPerc;
@property (readonly, nonatomic) unsigned long long txBKFwFreePerc;
@property (readonly, nonatomic) unsigned long long txBKMaxRetriesPerc;
@property (readonly, nonatomic) unsigned long long txBKForceExpirePerc;
@property (readonly, nonatomic) unsigned long long txVI;
@property (readonly, nonatomic) unsigned long long txVISuccessPerc;
@property (readonly, nonatomic) unsigned long long txVIAllFailPerc;
@property (readonly, nonatomic) unsigned long long txVIDroppedPerc;
@property (readonly, nonatomic) unsigned long long txVINoBuffPerc;
@property (readonly, nonatomic) unsigned long long txVINoResPerc;
@property (readonly, nonatomic) unsigned long long txVINoAckPerc;
@property (readonly, nonatomic) unsigned long long txVIChipModeErrPerc;
@property (readonly, nonatomic) unsigned long long txVIExpiredPerc;
@property (readonly, nonatomic) unsigned long long txVIFailPerc;
@property (readonly, nonatomic) unsigned long long txVIFwFreePerc;
@property (readonly, nonatomic) unsigned long long txVIMaxRetriesPerc;
@property (readonly, nonatomic) unsigned long long txVIForceExpirePerc;
@property (readonly, nonatomic) unsigned long long txVO;
@property (readonly, nonatomic) unsigned long long txVOSuccessPerc;
@property (readonly, nonatomic) unsigned long long txVOAllFailPerc;
@property (readonly, nonatomic) unsigned long long txVODroppedPerc;
@property (readonly, nonatomic) unsigned long long txVONoBuffPerc;
@property (readonly, nonatomic) unsigned long long txVONoResPerc;
@property (readonly, nonatomic) unsigned long long txVONoAckPerc;
@property (readonly, nonatomic) unsigned long long txVOChipModeErrPerc;
@property (readonly, nonatomic) unsigned long long txVOExpiredPerc;
@property (readonly, nonatomic) unsigned long long txVOFailPerc;
@property (readonly, nonatomic) unsigned long long txVOFwFreePerc;
@property (readonly, nonatomic) unsigned long long txVOMaxRetriesPerc;
@property (readonly, nonatomic) unsigned long long txVOForceExpirePerc;

- (void)transformTXStats;

@end
