@class MTMPUMutableFontDescriptor, NSMutableArray;

@interface MTMPUFontDescriptorCache : NSObject {
    MTMPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    unsigned long long _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}

+ (id)sharedFontDescriptorCache;

- (id)init;
- (void)dealloc;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;

@end
