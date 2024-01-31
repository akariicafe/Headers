@interface CLSAssetProcessedSignals_v3 : CLSAssetProcessedSignals_v1 <CLSNSFWProcessedSignals>

@property (nonatomic) unsigned char isRecallinglyNSFWExplicit : 1;
@property (nonatomic) unsigned char isPreciselyNSFWExplicit : 1;
@property (nonatomic) unsigned char isNSFWExplicit : 1;

@end
