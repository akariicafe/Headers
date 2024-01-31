@interface PAEKeyerHistogram : NSObject <NSSecureCoding> {
    void *_histogram;
    float _scale;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setHistogram:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void *)getHistogram;
- (float)getHistogramScale;
- (void)setHistogramArray:(id)a0;
- (void)setHistogramScale:(float)a0;

@end
