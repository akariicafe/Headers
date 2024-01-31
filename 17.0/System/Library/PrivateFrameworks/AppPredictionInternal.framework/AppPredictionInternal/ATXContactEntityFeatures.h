@class NSNumber;

@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (nonatomic) BOOL isFavoriteContact;
@property (nonatomic) BOOL isVIPContact;
@property (nonatomic) BOOL isEmergencyContact;
@property (nonatomic) BOOL isICloudFamilyMember;
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
