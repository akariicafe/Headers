@class NSString, NSArray;

@interface BMUserStatusChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *idsHandle;
@property (copy, nonatomic) NSString *statusChangeType;
@property (copy, nonatomic) NSArray *idsHandles;
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
- (id)initWithIDSHandle:(id)a0 statusChangeType:(id)a1;
- (id)initWithIDSHandles:(id)a0 statusChangeType:(id)a1;

@end
