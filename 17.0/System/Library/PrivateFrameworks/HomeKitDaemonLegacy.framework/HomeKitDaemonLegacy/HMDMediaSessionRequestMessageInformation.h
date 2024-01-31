@class HMDDevice, NSUUID, NSString, HMFMessage;

@interface HMDMediaSessionRequestMessageInformation : HMFObject <HMFLogging>

@property (readonly) HMFMessage *message;
@property (readonly, copy) NSUUID *messageIdentifier;
@property (readonly) HMDDevice *remoteSourceDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)attributeDescriptions;

@end
