@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient {
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}

+ (void)preheatServiceWithTimeout:(double)a0;

- (id)init;
- (id)initWithApplicationInfo:(id)a0;
- (unsigned int)generateImageWithContext:(id)a0 captureInfo:(id *)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
