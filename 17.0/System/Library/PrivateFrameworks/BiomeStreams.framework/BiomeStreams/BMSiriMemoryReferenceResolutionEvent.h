@class NSString, NSDictionary;

@interface BMSiriMemoryReferenceResolutionEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSDictionary *entitiesByEntityID;
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
- (id)initWithVersion:(id)a0 entityDict:(id)a1;

@end
