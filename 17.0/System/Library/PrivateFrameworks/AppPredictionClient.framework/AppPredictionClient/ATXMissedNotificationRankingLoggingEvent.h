@class NSString, ATXMissedNotificationRanking;

@interface ATXMissedNotificationRankingLoggingEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking;
@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
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
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initFromJSON:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithMissedNotificationRanking:(id)a0 eventType:(long long)a1 timestamp:(double)a2;

@end
