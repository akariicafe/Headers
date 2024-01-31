@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long capacity;

- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)removeLastObject;
- (void)encodeWithCoder:(id)a0;
- (id)lastObject;
- (unsigned long long)count;
- (id)removeWithPredicate:(id)a0;
- (id)firstObject;
- (id)description;
- (id)removeUntilFirstPredicateFail:(id)a0;
- (id)objectsMatchingPredicate:(id)a0;
- (id)insert:(id)a0 at:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)add:(id)a0;
- (id)bufferCopy;
- (id)firstObjectMatchingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)dropOldestElement;
- (id)getObjectAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;

@end
