@class NSString;

@interface GDEntitySourceID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *source;

- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(id)a0 source:(id)a1;

@end
