@class NSUUID, NSString, NSDate;

@interface ATXNotificationGroupEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *eventDate;
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
- (id)jsonRawData;
- (id)initWithEventType:(long long)a0 uuid:(id)a1 eventDate:(id)a2;
- (id)json;
- (void).cxx_destruct;

@end
