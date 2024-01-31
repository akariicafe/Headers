@interface XRVMRegionAnnotation : NSObject <NSSecureCoding> {
    unsigned long long _baseAddress;
    int *_pageMap;
    unsigned int _vpages;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pageSize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)dispositionForPage:(unsigned long long)a0;
- (id)initSamplingRegion:(id)a0 inTask:(unsigned int)a1;

@end
