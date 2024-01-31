@class NSString;

@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *unique_id;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL didSetup;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithId:(id)a0 andText:(id)a1 andDidSetup:(BOOL)a2;

@end
