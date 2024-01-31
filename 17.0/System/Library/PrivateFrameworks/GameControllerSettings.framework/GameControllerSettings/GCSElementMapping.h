@class NSString;
@protocol GCSJSONObject;

@interface GCSElementMapping : NSObject <NSSecureCoding, GCSJSONSerializable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (copy, nonatomic) NSString *elementKey;
@property (copy, nonatomic) NSString *mappingKey;
@property (nonatomic) int remappingOrder;
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic, getter=isCustomized) BOOL customized;

+ (id)archivalClasses;

- (id)initWithJSONObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElementKey:(id)a0 mappingKey:(id)a1 remappingOrder:(int)a2;

@end
