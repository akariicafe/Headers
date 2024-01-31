@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)enqueueObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectAtIndex:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)lastObject;
- (unsigned long long)count;
- (id)firstObject;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dequeueObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0 objects:(id)a1;

@end
