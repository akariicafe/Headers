@class NSString;

@interface BMPOICategoryEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *poiCategory;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) double timeIntervalSince1970;
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
- (id)initWithPOICategory:(id)a0 rank:(unsigned long long)a1 timeIntervalSince1970:(double)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
