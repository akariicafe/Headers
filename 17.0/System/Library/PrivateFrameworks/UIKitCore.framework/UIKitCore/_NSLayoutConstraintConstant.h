@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *symbolicValue;
@property (readonly, nonatomic) double numericValue;

+ (id)constantWithSymbolicValue:(id)a0 numericValue:(double)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSymbolicValue:(id)a0 numericValue:(double)a1;

@end
