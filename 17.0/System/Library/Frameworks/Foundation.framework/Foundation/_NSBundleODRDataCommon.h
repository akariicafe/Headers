@class NSLock, NSMutableDictionary, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {
    NSMutableDictionary *_assetPackToURL;
    NSLock *_lock;
    NSBundle *_bundle;
    long long _sandboxToken;
}

- (id)initWithBundle:(id)a0;
- (void)dealloc;
- (BOOL)assetPacksBecameAvailable:(id)a0 error:(id *)a1;
- (BOOL)assetPacksBecameUnavailable:(id)a0 error:(id *)a1;

@end
