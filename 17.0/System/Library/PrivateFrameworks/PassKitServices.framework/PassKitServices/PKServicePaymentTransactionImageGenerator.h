@class NSString, PKPassKitServicesXPCService, NSMutableDictionary;

@interface PKServicePaymentTransactionImageGenerator : NSObject {
    PKPassKitServicesXPCService *_xpcService;
    NSMutableDictionary *_mappedFilesIndices;
    NSMutableDictionary *_keysHitCounts;
    struct { void *bytes; unsigned long long length; } _mappedFiles[50];
    NSString *_nextKeyToEvict;
    unsigned long long _evictionHitCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasSetupTempDir;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)imageDataForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (unsigned long long)_nextIndexToUseAndEvictIfNeeded;
- (void)_cleanMappedFile:(struct { void *x0; unsigned long long x1; })a0;
- (void)_updateNextKeyToEvict;
- (id)cachedImageDataForKey:(id)a0;
- (id)initWithPassKitServicesXPCService:(id)a0;
- (void)setCachedImageData:(id)a0 forKey:(id)a1;

@end
