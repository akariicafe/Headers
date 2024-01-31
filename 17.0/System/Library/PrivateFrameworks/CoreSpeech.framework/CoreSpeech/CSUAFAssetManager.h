@class NSString, NSObject, UAFAssetSet;
@protocol OS_dispatch_queue;

@interface CSUAFAssetManager : NSObject {
    UAFAssetSet *_assetSet;
    NSString *_locale;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;
- (void)_getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;

@end
