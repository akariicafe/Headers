@class RegDenseShaders;

@interface RegDenseShared : NSObject {
    RegDenseShaders *_shaders;
}

+ (id)sharedInstance;

- (id)getShaders:(id)a0;
- (void).cxx_destruct;

@end
