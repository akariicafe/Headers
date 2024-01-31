@class NSData;

@interface ATXGamePlayKitARC4RandomSource : ATXGamePlayKitRandomSource {
    struct Arc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
    NSData *_seed;
}

@property (copy, nonatomic) NSData *seed;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSeed:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (void)dropValuesWithCount:(unsigned long long)a0;
- (unsigned long long)nextBits:(int)a0;
- (BOOL)nextBool;
- (float)nextUniform;

@end
