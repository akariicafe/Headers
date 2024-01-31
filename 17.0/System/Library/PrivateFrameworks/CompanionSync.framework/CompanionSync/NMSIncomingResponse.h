@class NSString, NSDictionary, NSData, NSDate, IDSMessageContext;

@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>

@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) id pbResponse;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *requestIDSIdentifier;
@property (retain, nonatomic) NSDate *requestSent;
@property (retain, nonatomic) NSDictionary *requestPersistentUserInfo;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;

@end
