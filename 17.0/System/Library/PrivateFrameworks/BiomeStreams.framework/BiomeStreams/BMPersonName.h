@class NSString, BMNameComponents;

@interface BMPersonName : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BMNameComponents *nameComponents;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 nameComponents:(id)a1;

@end
