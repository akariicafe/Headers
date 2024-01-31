@interface PHSceneClassification : NSObject

@property (nonatomic) long long packedBoundingBoxRect;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long classificationType;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0 includeTemporalClassifications:(BOOL)a1;

- (unsigned long long)hash;
- (id)initWithSceneIdentifier:(unsigned int)a0 confidence:(double)a1;
- (id)initWithSceneIdentifier:(unsigned int)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startTime:(double)a3 duration:(double)a4 classificationSource:(long long)a5;
- (id)initWithSceneIdentifier:(unsigned int)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)description;
- (id)initWithSceneIdentifier:(unsigned int)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startTime:(double)a3 duration:(double)a4;
- (id)initWithSceneIdentifier:(unsigned int)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startTime:(double)a3 duration:(double)a4 classificationType:(long long)a5;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToSceneClassification:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
