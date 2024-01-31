@class VCPLoaned, NSString;

@interface VCPWallpaperAnalyzer : NSObject {
    VCPLoaned *_modelEspresso;
    float *_inputsData;
    NSString *_resConfig;
}

+ (id)sharedModelPool;

- (id)init;
- (void).cxx_destruct;
- (int)createModel;
- (int)analyzeWithSceneprint:(id)a0 results:(id *)a1 cancel:(id /* block */)a2;

@end
