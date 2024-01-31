@class NSArray, CHSGaugeParameters, NSData;

@interface CHUISMutableWatchComplicationsWidgetSnapshotMetadata : CHUISWatchComplicationsWidgetSnapshotMetadata

@property (copy, nonatomic) NSArray *labelData;
@property (copy, nonatomic) CHSGaugeParameters *gauge;
@property (copy, nonatomic) NSData *gaugeProviderData;
@property (copy, nonatomic) NSArray *gaugeMinimumLabelData;
@property (copy, nonatomic) NSArray *gaugeMaximumLabelData;
@property (copy, nonatomic) NSArray *outerLabelData;

- (void)setLabelData:(id)a0;
- (void)setGauge:(id)a0;
- (void)setGaugeMaximumLabelData:(id)a0;
- (void)setGaugeMinimumLabelData:(id)a0;
- (void)setGaugeProviderData:(id)a0;
- (void)setOuterLabelData:(id)a0;

@end
