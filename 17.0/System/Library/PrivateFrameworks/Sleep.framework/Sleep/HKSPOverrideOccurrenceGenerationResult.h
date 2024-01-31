@class HKSPMutableSleepScheduleOccurrence;

@interface HKSPOverrideOccurrenceGenerationResult : NSObject

@property (retain, nonatomic) HKSPMutableSleepScheduleOccurrence *overrideOccurrence;
@property (nonatomic) BOOL wasGeneratedFromTemplate;
@property (nonatomic) BOOL upcomingOccurrenceWasOverride;

- (void).cxx_destruct;

@end
