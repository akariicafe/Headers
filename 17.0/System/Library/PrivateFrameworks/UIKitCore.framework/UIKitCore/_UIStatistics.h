@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
}

@property (nonatomic) double sampleRate;

+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)a0;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)a0;
+ (id)scrubberUsageCount;
+ (id)previewInteractionPeekForce;
+ (id)pinchGestureCount;
+ (id)recentsInputViewItemSelectedCount;
+ (id)_sharedStatisticWithDomain:(id)a0 statisticsClass:(Class)a1 identifierReporting:(long long)a2;
+ (id)maxForce;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)a0;
+ (id)scrubberUsageTime;
+ (id)recentsInputViewPresentationCount;
+ (id)previewInteractionPeekCount;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)a0;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)a0;
+ (id)feedbackEngineActivationCountWithSuffix:(id)a0;
+ (id)alertButtonTapCount;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)a0;
+ (id)recentsInputViewNumberOfItems;
+ (id)scrollBounceCount;
+ (id)previewInteractionPeekDuration;
+ (id)zoomGestureCount;
+ (id)controlValueChangeEmittedCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)controlInteractionDurationDistributionWithCategory:(id)a0 suffix:(id)a1;
+ (id)recentsInputViewNewEntryCount;
+ (id)previewInteractionPopCount;
+ (id)coverSheetButtonInteractionCountWithActivation:(BOOL)a0 category:(id)a1;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)a0;
+ (unsigned long long)currentTime;
+ (id)controlTapCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)a0;
+ (id)previewInteractionPopForce;
+ (id)previewInteractionTapCount;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)a0;
+ (id)coverSheetButtonMaximumForceWithActivation:(BOOL)a0 category:(id)a1;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)a0;
+ (id)previewInteractionAlertPresentationCount;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)a0;

- (id)initWithDomain:(id)a0;
- (id)init;
- (void)_setValue:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_key;
- (void)_addChildStatistic:(id)a0;
- (void)_incrementValueBy:(long long)a0;
- (void)_recordDistributionTime:(unsigned long long)a0;
- (void)_recordDistributionValue:(double)a0;
- (void)_removeChildStatistic:(id)a0;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)a0;
- (void)_resetValue;
- (BOOL)_shouldSample;
- (id)initWithDomain:(id)a0 identifierReporting:(long long)a1;
- (void)randomizeSampleValue;

@end
