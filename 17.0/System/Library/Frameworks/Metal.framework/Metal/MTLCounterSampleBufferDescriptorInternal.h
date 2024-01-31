@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setSampleCount:(unsigned long long)a0;
- (unsigned long long)sampleCount;
- (id)label;
- (void)setLabel:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCounterSet:(id)a0;
- (id)counterSet;

@end
