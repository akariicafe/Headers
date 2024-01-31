@class PHPhotoLibrary, NSString;

@interface PHCPAnalyticsCachedPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider>

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerSystemProperties:(id)a0;
- (id)_librarySizeRange:(long long)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_cachedProperties;
- (void).cxx_destruct;

@end
