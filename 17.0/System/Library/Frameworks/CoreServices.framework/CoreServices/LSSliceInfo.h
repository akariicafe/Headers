@interface LSSliceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subtype;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSliceDescData:(struct LSSliceData { int x0; int x1; })a0;
- (id)initWithType:(int)a0 subtype:(int)a1;
- (struct LSSliceData { int x0; int x1; })sliceValue;

@end
