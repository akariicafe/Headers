@class NSString, PTHandGestureDetector, ANSTForegroundSegmentation, PTVFXRenderEffect, PTEspressoGenericExecutor;

@interface PTEffectResources : NSObject

@property (retain, nonatomic) NSString *effectNetworkPath;
@property (retain, nonatomic) NSString *effectNetworkConfig;
@property (retain, nonatomic) PTEspressoGenericExecutor *effectNetwork;
@property (retain, nonatomic) PTEspressoGenericExecutor *segmentationNetwork;
@property (retain, nonatomic) PTHandGestureDetector *handGestureDetector;
@property (retain, nonatomic) ANSTForegroundSegmentation *personSegmentationProvider;
@property (nonatomic) unsigned long long personSegmentationProviderAspectRatio;
@property (retain, nonatomic) PTVFXRenderEffect *renderEffect;

- (void).cxx_destruct;

@end
