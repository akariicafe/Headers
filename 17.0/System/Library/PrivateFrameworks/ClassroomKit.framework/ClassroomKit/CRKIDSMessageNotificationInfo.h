@class NSDictionary, NSString;

@interface CRKIDSMessageNotificationInfo : NSObject <CRKDictionaryCodable>

@property (readonly, copy, nonatomic) NSDictionary *message;
@property (readonly, copy, nonatomic) NSString *senderAppleID;
@property (readonly, copy, nonatomic) NSString *senderAddress;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;

@end
