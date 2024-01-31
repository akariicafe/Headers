@class NSUUID, NSDictionary;

@interface CRKIDSMessageMetadata : NSObject <CRKDictionaryCodable>

@property (readonly, nonatomic) NSUUID *messageIdentifier;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) long long messagingVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;
+ (id)metadataWithMessageType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithMessageIdentifier:(id)a0 messageType:(long long)a1 messagingVersion:(long long)a2;

@end
