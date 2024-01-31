@interface TRIFBBoxedDouble : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedDouble { double x0; } *cppPointer;
@property (readonly, nonatomic) double val;

- (id)init;
- (unsigned long long)hash;
- (id)init_;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVal:(double)a0;

@end
