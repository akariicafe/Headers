@class NSString, NSArray, HMDRemoteMessageDestination, HMFMessage;
@protocol HMDIDSService;

@interface HMDIDSSendMessageOperation : HMFOperation <HMFLogging, HMFObject, HMDIDSServiceDelegate> {
    double _timeout;
    HMDRemoteMessageDestination *_destination;
    NSString *_messageIdentifier;
}

@property (readonly) id<HMDIDSService> service;
@property (readonly) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (double)timeout;
+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)main;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithMessage:(id)a0 service:(id)a1;

@end
