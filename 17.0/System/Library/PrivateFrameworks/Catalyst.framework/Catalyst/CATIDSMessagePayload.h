@class NSDictionary, CATIDSMessageMetadata;
@protocol CATIDSMessage;

@interface CATIDSMessagePayload : NSObject <CATDictionaryCodable>

@property (readonly, nonatomic) CATIDSMessageMetadata *metadata;
@property (readonly, nonatomic) id<CATIDSMessage> message;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)messageContent;
- (id)initWithMetadata:(id)a0 message:(id)a1;

@end
