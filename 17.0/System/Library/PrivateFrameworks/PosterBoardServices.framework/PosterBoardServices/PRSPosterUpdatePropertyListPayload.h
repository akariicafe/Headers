@class NSData;

@interface PRSPosterUpdatePropertyListPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *propertyListData;
@property (readonly, copy, nonatomic) id propertyListRoot;

- (id)initWithPropertyListData:(id)a0;
- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
