@class PGEventLabelingConfiguration;

@interface PGEventLabelingConfigurationWrapper : NSObject {
    PGEventLabelingConfiguration *_configuration;
}

+ (BOOL)isEventLabelingEnabled;
+ (BOOL)usePrimaryMeaningDomainForEventLabelingMeanings;

- (id)init;
- (void).cxx_destruct;
- (double)highPrecisionThresholdForMeaningLabel:(id)a0;
- (double)highRecallThresholdForMeaningLabel:(id)a0;
- (id)meaningLabelsForEventLabeling;

@end
