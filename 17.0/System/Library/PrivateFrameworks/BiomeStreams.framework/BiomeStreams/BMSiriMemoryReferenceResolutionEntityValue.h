@class NSData;

@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSData *valueData;

- (id)initWithProto:(id)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(double)a0 valueData:(id)a1;

@end
