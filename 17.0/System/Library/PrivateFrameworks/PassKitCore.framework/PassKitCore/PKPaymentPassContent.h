@class PKDynamicLayerConfiguration, NSString, NSDictionary, NSURL, NSArray, PKPassAuxiliaryRegistrationRequirements, PKSiriIntentsConfiguration;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cobrandName;
@property (copy, nonatomic) NSURL *transactionServiceURL;
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL;
@property (copy, nonatomic) NSString *transactionPushTopic;
@property (copy, nonatomic) NSURL *messageServiceURL;
@property (copy, nonatomic) NSURL *messageServiceRegistrationURL;
@property (copy, nonatomic) NSString *messagePushTopic;
@property (copy, nonatomic) NSString *appURLScheme;
@property (copy, nonatomic) NSString *customerServiceIdentifier;
@property (copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID;
@property (nonatomic) BOOL supportsTransitOnly;
@property (copy, nonatomic) NSArray *availableActions;
@property (copy, nonatomic) NSArray *actionGroups;
@property (copy, nonatomic) NSArray *transitCommutePlans;
@property (nonatomic) unsigned long long transitCommutePlanType;
@property (copy, nonatomic) NSArray *upgradeRequests;
@property (copy, nonatomic) NSString *shippingAddressSeed;
@property (copy, nonatomic) NSString *speakableMake;
@property (copy, nonatomic) NSString *speakableModel;
@property (copy, nonatomic) PKSiriIntentsConfiguration *supportedSiriIntents;
@property (retain, nonatomic) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements;
@property (retain, nonatomic) PKDynamicLayerConfiguration *dynamicLayerConfiguration;
@property (nonatomic) long long identityType;
@property (nonatomic) long long accessType;
@property (nonatomic) long long paymentType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;

@end
