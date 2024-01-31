@class NSString, NSNumber;

@interface BMFindMyLocationChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *idsHandle;
@property (nonatomic) unsigned long long locationChangeType;
@property long long motionActivityState;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *name;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIDSHandle:(id)a0 locationChangeType:(unsigned long long)a1;
- (id)initWithIDSHandle:(id)a0 locationChangeType:(unsigned long long)a1 motionActivityState:(long long)a2 latitude:(id)a3 longitude:(id)a4 name:(id)a5;

@end
