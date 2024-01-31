@class NSNumber, NSArray;

@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *fertilityStartJulianDay;
@property (retain, nonatomic) NSNumber *fertilityEndJulianDay;
@property (nonatomic) unsigned int julianDayOfMenstruationStart;
@property (nonatomic) unsigned int julianDayOfMenstruationEnd;
@property (nonatomic) BOOL isDeterminant;
@property (nonatomic) unsigned char predictionPrimarySource;
@property (retain, nonatomic) NSArray *phases;
@property (nonatomic) long long dailyEligibleWristTemperatureCount;
@property (nonatomic) unsigned char ovulationConfirmationFailure;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
