@class NSNumber;

@interface LNIntentCollectionSize : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *min;
@property (readonly, copy, nonatomic) NSNumber *max;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithMin:(id)a0 max:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
