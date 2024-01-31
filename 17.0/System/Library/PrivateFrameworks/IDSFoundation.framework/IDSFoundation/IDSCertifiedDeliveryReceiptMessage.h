@class NSString, NSDictionary, NSData, NSNumber;

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage

@property (retain, nonatomic) NSString *originalGUID;
@property (retain, nonatomic) NSData *senderToken;
@property (retain, nonatomic) NSData *certifiedDeliveryRTS;
@property (nonatomic) long long certifiedDeliveryVersion;
@property (retain, nonatomic) NSNumber *failureReason;
@property (retain, nonatomic) NSString *failureReasonMessage;
@property (nonatomic) BOOL generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *generatedDeliveryStatusContext;
@property (retain, nonatomic) NSString *localURI;
@property (retain, nonatomic) NSString *remoteURI;
@property (retain, nonatomic) NSData *queryHash;
@property (retain, nonatomic) NSData *encryptedData;

- (long long)command;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;
- (BOOL)wantsResponse;
- (id)initWithCertifiedDeliveryContext:(id)a0;

@end
