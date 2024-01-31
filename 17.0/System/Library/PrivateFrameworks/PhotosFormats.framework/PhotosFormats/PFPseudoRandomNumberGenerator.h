@interface PFPseudoRandomNumberGenerator : NSObject <PFSeededRandomNumberGenerator> {
    unsigned int _z;
    unsigned int _w;
}

@property (nonatomic) unsigned long long seed;

- (id)init;
- (id)initWithSeed:(unsigned long long)a0;
- (double)_next;
- (unsigned long long)nextUnsignedIntegerLessThan:(unsigned long long)a0;

@end
