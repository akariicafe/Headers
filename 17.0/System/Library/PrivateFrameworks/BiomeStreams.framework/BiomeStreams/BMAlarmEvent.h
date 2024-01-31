@class NSUUID, NSString;

@interface BMAlarmEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isSleepAlarm;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long lastEventType;
@property (readonly, nonatomic) NSUUID *alarmID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventType:(unsigned long long)a0 alarmID:(id)a1 isSleepAlarm:(BOOL)a2;
- (id)initWithEventType:(unsigned long long)a0 lastEventType:(unsigned long long)a1 alarmID:(id)a2 isSleepAlarm:(BOOL)a3;

@end
