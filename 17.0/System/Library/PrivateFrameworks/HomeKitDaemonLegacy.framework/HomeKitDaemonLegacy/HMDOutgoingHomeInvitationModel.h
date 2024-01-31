@class NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *user;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSNumber *responseReceived;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (retain, nonatomic) NSArray *operations;
@property (retain, nonatomic) NSArray *operationIdentifiers;

+ (id)properties;

- (id)dependentUUIDs;

@end
