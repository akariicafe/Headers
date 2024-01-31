@class HDProfile;

@interface HDMHLoggingPatternDetector : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)isUnpleasantLoggingPatternDetectedWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 pendingStateOfMind:(id)a2 error:(id *)a3;

@end
