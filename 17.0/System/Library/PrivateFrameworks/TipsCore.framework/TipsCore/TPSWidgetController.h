@class NSMutableDictionary, TPSDocument;
@protocol TPSWidgetControllerDelegate;

@interface TPSWidgetController : NSObject {
    TPSDocument *_preferredDocument;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } documentLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } urlSessionLock;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (weak, nonatomic) id<TPSWidgetControllerDelegate> delegate;
@property (copy, nonatomic) TPSDocument *preferredDocument;

- (id)cacheFileURLForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3;
- (id)init;
- (void)dealloc;
- (void)widgetAssetsForDocument:(id)a0 preferCacheIfAvailable:(BOOL)a1 userInterfaceStyle:(long long)a2 completionHandler:(id /* block */)a3;
- (void)setPreferredDocument:(id)a0;
- (void)attemptWidgetUpdateWith:(id)a0;
- (id)preferredDocument;
- (void)fetchAssetForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3 completionHandler:(id /* block */)a4;
- (void)updateWidgetDocumentWithDocumentsMap:(id)a0 documentsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 preferHardwareWelcome:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)fetchWidgetAssetsForDocument:(id)a0 preferCacheIfAvailable:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updatePreferredWidget:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSessionMapValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEligibleForWelcome;

@end
