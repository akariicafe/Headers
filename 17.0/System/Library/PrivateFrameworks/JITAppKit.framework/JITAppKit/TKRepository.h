@class NSString, NSURL;

@interface TKRepository : NSObject {
    NSString *_bundlePath;
}

@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSURL *URL;

+ (void)reset;
+ (id)_processBundleIdentifier;
+ (BOOL)_hasEntitlement:(id)a0;
+ (BOOL)_isApprovedProcess;
+ (id)bundlePathForURL:(id)a0;
+ (void)loadWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)unpackBundleWithURL:(id)a0 destinationPath:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 bundlePath:(id)a1;
- (id)viewPathForName:(id)a0;

@end
