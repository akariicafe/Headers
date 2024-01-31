@class NSNumber;

@interface ATXAppEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSNumber *appCategoryScore;
@property (retain, nonatomic) NSNumber *appCategoryScore_v2;
@property (retain, nonatomic) NSNumber *globalModeAffinityPrior;
@property (retain, nonatomic) NSNumber *globalInterruptingPrior;
@property (retain, nonatomic) NSNumber *notificationsReceivedInLastTwoWeeks;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountByEntity;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsClassConditionalProbabilityByEntity;
@property (retain, nonatomic) NSNumber *globalAppInterruptionsCountByEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfInterruptingEntity;
@property (retain, nonatomic) NSNumber *modePopularityOfInterruptingEntity;
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfInterruptingEntity;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity;

- (id)init;
- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
