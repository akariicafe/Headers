@class NSArray, NSString;

@interface ATXNotificationDeliveryEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) unsigned long long deliveryUI;
@property (readonly, nonatomic) NSArray *suggestionUUIDs;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)initWithDeliveryUI:(unsigned long long)a0 suggestionUUIDs:(id)a1;
- (id)jsonRawData;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXNotificationDeliveryEvent:(id)a0;

@end
