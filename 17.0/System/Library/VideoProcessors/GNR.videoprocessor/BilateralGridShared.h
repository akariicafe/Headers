@class BilateralGridShaders;

@interface BilateralGridShared : NSObject {
    BilateralGridShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (id)getShaders:(id)a0 normalizeGridConfidence:(BOOL)a1;
- (void).cxx_destruct;

@end
