@class NSString, TSUPointerKeyDictionary;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned long long mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedPool;
+ (id)_singletonAlloc;
+ (BOOL)isValidImageData:(id)a0;
+ (Class)p_providerClassForData:(id)a0;

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)providerForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)addInterestInProviderForData:(id)a0;
- (void)flushImageProviders;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)a0;
- (id)p_providerForData:(id)a0 temporary:(BOOL)a1 shouldValidate:(BOOL)a2;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)a0;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)p_updateFileDescriptorLimit;
- (void)removeInterestInProviderForData:(id)a0;
- (id)temporaryProviderForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)willCloseDocumentContext:(id)a0;
- (void)willCullData:(id)a0;

@end
