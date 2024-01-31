@class NSData;

@interface MSVARC4RandomSource : NSObject <MSVRandomSource, NSSecureCoding, NSCopying> {
    struct MSVArc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
}

@property (class, readonly, nonatomic) MSVARC4RandomSource *sharedSource;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *seed;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSeed:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)bytesWithLength:(long long)a0;
- (id)mutableBytesWithLength:(long long)a0;

@end
