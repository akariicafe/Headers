@class PAApplication;

@interface PAReplayKitAccess : PAAccess

@property (readonly, nonatomic) PAApplication *broadcaster;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:(id)a0 fromBroadcaster:(id)a1;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:(id)a0;

- (id)initWithProto:(id)a0;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)category;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAccessor:(id)a0 fromBroadcaster:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)JSONObject;
- (id)initWithAccessor:(id)a0;
- (id)initWithAccessor:(id)a0 broadcaster:(id)a1 identifier:(id)a2 kind:(long long)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithNewBroadcaster:(id)a0;

@end
