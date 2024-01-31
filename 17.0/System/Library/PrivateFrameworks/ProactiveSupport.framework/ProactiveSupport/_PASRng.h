@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (id)init;
- (double)nextDouble;
- (unsigned long long)next;
- (float)nextFloat;
- (id)initWithSeed:(unsigned long long)a0;

@end
