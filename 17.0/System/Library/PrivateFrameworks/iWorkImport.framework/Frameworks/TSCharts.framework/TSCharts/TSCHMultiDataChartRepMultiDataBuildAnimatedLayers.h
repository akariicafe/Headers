@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject

@property (retain, nonatomic) CALayer *legendLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (copy, nonatomic) NSArray *referenceLineLayers;
@property (retain, nonatomic) CALayer *dataSetNameLayer;
@property (copy, nonatomic) NSArray *elementLayers;
@property (readonly, nonatomic) NSArray *allBackgroundFadingLayers;
@property (readonly, nonatomic) NSArray *elementFadingLayers;
@property (readonly, nonatomic) NSArray *layersAlreadyHaveProperTransforms;

+ (id)animatedLayers;

- (void).cxx_destruct;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)a0;

@end
