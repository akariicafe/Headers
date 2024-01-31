@class NSString;

@interface HMDAppleMediaAccessoryModelIdentifierRequestMessagePayload : HMFObject <HMFLogging, HMMessageEncoding>

@property (class, readonly, copy) NSString *messageName;

@property (readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccessoryIdentifier:(id)a0;
- (id)payloadCopy;

@end
