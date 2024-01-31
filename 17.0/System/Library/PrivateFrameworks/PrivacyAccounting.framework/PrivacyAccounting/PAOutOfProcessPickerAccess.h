@interface PAOutOfProcessPickerAccess : PAAccess

@property (readonly, nonatomic) long long pickerType;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAuditToken:(struct { unsigned int x0[8]; })a0 forType:(long long)a1;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:(id)a0 forType:(long long)a1;

- (id)initWithProto:(id)a0;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)category;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forType:(long long)a1;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 forType:(long long)a3;
- (id)description;
- (id)initWithAccessor:(id)a0 forType:(long long)a1;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)JSONObject;
- (id)descriptionForCategory;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
