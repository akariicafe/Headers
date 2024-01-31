@class NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCompilationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (id)_compileModelAndAddToCacheWithConfigFiles:(id)a0 compileDirectoryPath:(id)a1 locale:(id)a2 assetVersion:(id)a3 hashToUse:(id)a4;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 deviceId:(id)a2 currentLocale:(id)a3 compileDirectory:(id)a4 errOut:(id *)a5;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 endpointId:(id)a2 errOut:(id *)a3;
- (void)compileUsingConfig:(id)a0 locale:(id)a1 compileDirectory:(id)a2 errOut:(id *)a3;

@end
