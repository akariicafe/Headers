@class NSArray, SCDAFAdvertisement, SCDAFDevice, NSDate, NSString, NSNumber;

@interface SCDAFParticipation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SCDAFAdvertisement *advertisement;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) NSArray *boosts;
@property (nonatomic) double rawGoodnessScore;
@property (retain, nonatomic) SCDAFDevice *device;
@property (retain, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSDate *voiceTriggerDate;
@property (retain, nonatomic) NSArray *seenAdvertisements;
@property (retain, nonatomic) NSArray *trumpReasons;
@property (copy, nonatomic) NSString *userRequestText;
@property (retain, nonatomic) SCDAFAdvertisement *winnerAdvertisement;
@property (retain, nonatomic) NSArray *nearbyDevices;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *cdaId;
@property (copy, nonatomic) NSNumber *alarmState;
@property (copy, nonatomic) NSNumber *timerState;
@property (copy, nonatomic) NSNumber *mediaState;
@property (copy, nonatomic) NSNumber *triggerType;
@property (copy, nonatomic) NSNumber *timeSinceLastWinInMilliseconds;
@property (copy, nonatomic) NSNumber *timeSinceTriggerInMilliseconds;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;

@end
