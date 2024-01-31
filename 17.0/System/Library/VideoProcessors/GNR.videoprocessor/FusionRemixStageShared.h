@class FuseRemixShaders;

@interface FusionRemixStageShared : NSObject {
    FuseRemixShaders *_fuseRemixShaders[4][2][2][2][2];
}

+ (id)sharedInstance;

- (id)getShaders:(id)a0 fusionType:(int)a1 fp16:(BOOL)a2 staticOIS:(BOOL)a3 reduceOisGhosting:(BOOL)a4 fusionAlignment:(int)a5;
- (void).cxx_destruct;

@end
