@class NSString;

@interface MSDPlatform : NSObject

@property BOOL watchOS;
@property BOOL tvOS;
@property BOOL iOS;
@property BOOL macOS;
@property BOOL rOS;
@property (retain, nonatomic) NSString *platformType;

+ (id)sharedInstance;
+ (BOOL)iOSHub;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isValidProductList:(id)a0;
- (void)raiseInvalidProductListExceptionWithReason:(id)a0;
- (void)setPlatformWithManifestProductList:(id)a0;

@end
