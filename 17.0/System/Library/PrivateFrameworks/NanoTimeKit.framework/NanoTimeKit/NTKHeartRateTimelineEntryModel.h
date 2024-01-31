@class NSArray, NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) NSDate *measurementDate;
@property (nonatomic) long long BPM;
@property (nonatomic) BOOL hasBPM;
@property (nonatomic) BOOL lessThanMinute;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) BOOL hasSummary;
@property (nonatomic) long long dailyLowBPM;
@property (nonatomic) long long dailyHighBPM;
@property (retain, nonatomic) NSArray *chartPoints;

- (void).cxx_destruct;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_metadataWithCurrentMeasurements;
- (id)_newCircularTemplateUsingMediumSize:(BOOL)a0;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_signatureBezelTextProvider;
- (id)templateForComplicationFamily:(long long)a0;

@end
