@interface SAURLSize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long size;
@property BOOL mayBePartOfCloneChain;

+ (id)newWithSize:(unsigned long long)a0;
+ (id)newWithSize:(unsigned long long)a0 mayBePartOfCloneChain:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(unsigned long long)a0 mayBePartOfCloneChain:(BOOL)a1;

@end
