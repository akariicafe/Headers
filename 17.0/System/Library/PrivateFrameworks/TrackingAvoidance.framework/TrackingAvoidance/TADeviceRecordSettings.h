@interface TADeviceRecordSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double expiryTimeInterval;
@property (nonatomic) double purgeTimeInterval;
@property (readonly, nonatomic) double keepAliveInterval;
@property (readonly, nonatomic) double minimumStagingInterval;
@property (readonly, nonatomic) long long stagingBackstopHour;
@property (readonly, nonatomic) long long assumedKeyRollHour;
@property (readonly, nonatomic) double scanInterval;
@property (readonly, nonatomic) BOOL surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
@property (readonly, nonatomic) BOOL surfaceImmediatelyBeepOnMove;
@property (readonly, nonatomic) double maxExpectedHELEWildInterval;
@property (readonly, nonatomic) double maxExpectedDurianWildInterval;
@property (readonly, nonatomic) BOOL shouldAlertHELEImmediatelyForImmediateTypes;
@property (readonly, nonatomic) double minimumHELEStagingInterval;
@property (readonly, nonatomic) long long stagingHELEBackstopHour;
@property (readonly, nonatomic) BOOL surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
@property (readonly, nonatomic) double hyperHELEStagingInterval;
@property (readonly, nonatomic) double hyperStagingInterval;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExpiryTimeIntervalOrDefault:(id)a0 purgeTimeIntervalOrDefault:(id)a1 keepAliveIntervalOrDefault:(id)a2 minimumStagingIntervalOrDefault:(id)a3 stagingBackstopHourOrDefault:(id)a4 assumedKeyRollHourOrDefault:(id)a5 scanIntervalOrDefault:(id)a6 surfaceImmediatelyBeepOnMoveOrDefault:(id)a7 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)a8 maxExpectedHELEWildIntervalOrDefault:(id)a9 maxExpectedDurianWildIntervalOrDefault:(id)a10 shouldAlertHELEImmediatelyForImmediateTypesOrDefault:(id)a11 minimumHELEStagingIntervalOrDefault:(id)a12 stagingHELEBackstopHourOrDefault:(id)a13 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)a14 hyperHELEStagingIntervalOrDefault:(id)a15 hyperStagingIntervalOrDefault:(id)a16;
- (id)initWithExpiryTimeInterval:(double)a0 purgeTimeInterval:(double)a1 keepAliveInterval:(double)a2 minimumStagingInterval:(double)a3 stagingBackstopHour:(unsigned long long)a4 assumedKeyRollHour:(unsigned long long)a5 scanInterval:(double)a6 surfaceImmediatelyBeepOnMove:(BOOL)a7 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(BOOL)a8 maxExpectedHELEWildInterval:(double)a9 maxExpectedDurianWildInterval:(double)a10 shouldAlertHELEImmediatelyForImmediateTypes:(BOOL)a11 minimumHELEStagingInterval:(double)a12 stagingHELEBackstopHour:(unsigned long long)a13 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(BOOL)a14 hyperHELEStagingInterval:(double)a15 hyperStagingInterval:(double)a16;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
