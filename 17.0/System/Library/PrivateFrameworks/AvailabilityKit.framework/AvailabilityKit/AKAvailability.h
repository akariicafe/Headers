@class NSUUID, NSString;

@interface AKAvailability : NSObject

@property (readonly, nonatomic, getter=isAvailableToMe) BOOL availableToMe;
@property (readonly, nonatomic) NSUUID *activityIdentifier;
@property (readonly, nonatomic) BOOL personalizedAvailability;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSString *activityIdentifierString;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithPublishedStatus:(id)a0;
- (id)initWithAvailable:(BOOL)a0 activityIdentifierString:(id)a1;
- (id)statusPublishRequest;
- (id)_payloadDictionary;
- (id)_initWithAvailable:(BOOL)a0 activityIdentifierString:(id)a1 personalizedAvailability:(BOOL)a2;
- (id)initWithAvailable:(BOOL)a0 activityIdentifier:(id)a1;
- (id)initWithStatusPayload:(id)a0 invitationPayload:(id)a1;

@end
