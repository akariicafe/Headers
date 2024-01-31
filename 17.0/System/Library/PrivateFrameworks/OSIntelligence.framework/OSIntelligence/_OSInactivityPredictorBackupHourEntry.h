@interface _OSInactivityPredictorBackupHourEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double averageDuration;
@property (nonatomic) double stdDev;

+ (id)descriptionWithHistoryEntries:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
