@class NSString;

@interface BMSocialMediaHandle : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *handle;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleId:(id)a0 handle:(id)a1;

@end
