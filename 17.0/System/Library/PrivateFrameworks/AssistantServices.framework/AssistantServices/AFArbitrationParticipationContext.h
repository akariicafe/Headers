@class NSArray, CDASchemaCDAScoreBoosters, AFMyriadRecord, NSDate, NSNumber;

@interface AFArbitrationParticipationContext : NSObject

@property (copy, nonatomic) AFMyriadRecord *ownAdvertisement;
@property (copy, nonatomic) NSArray *advertisements;
@property (nonatomic) BOOL decisionIsWon;
@property (copy, nonatomic) NSDate *requestStartDate;
@property (copy, nonatomic) NSDate *voiceTriggerDate;
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *scoreBoosters;
@property (nonatomic) unsigned char deviceClass;
@property (copy, nonatomic) NSNumber *triggerType;
@property (nonatomic) double lastActivationTime;

- (void).cxx_destruct;

@end
