@interface DIResizeParams : DIBaseParams

@property unsigned long long size;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExistingParams:(id)a0 size:(unsigned long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 size:(unsigned long long)a1 error:(id *)a2;
- (BOOL)resizeWithError:(id *)a0;

@end
