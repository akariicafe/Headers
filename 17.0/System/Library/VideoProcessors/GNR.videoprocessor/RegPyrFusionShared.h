@class RegPyrFusionShaders;

@interface RegPyrFusionShared : NSObject {
    RegPyrFusionShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (id)getShaders:(id)a0;
- (void).cxx_destruct;

@end
