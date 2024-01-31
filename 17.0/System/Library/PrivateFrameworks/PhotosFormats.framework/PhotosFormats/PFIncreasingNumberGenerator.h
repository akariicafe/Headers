@interface PFIncreasingNumberGenerator : NSObject <PFSeededRandomNumberGenerator>

@property (nonatomic) unsigned long long seed;

- (id)init;
- (id)initWithSeed:(unsigned long long)a0;
- (unsigned long long)nextUnsignedIntegerLessThan:(unsigned long long)a0;

@end
