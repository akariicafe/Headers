@class NSDateInterval, NSString, NSDate;

@interface BMTextInputSessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionID:(id)a2 sessionType:(unsigned long long)a3;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionType:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
