@interface SoundAnalysis.EncoderByNSCoding : NSCoder {
    void /* unknown type, empty encoding */ encoder;
}

@property (nonatomic, readonly) BOOL allowsKeyedCoding;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forKey:(id)a1;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; })a0 forKey:(id)a1;
- (void)encodeCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forKey:(id)a1;

@end
