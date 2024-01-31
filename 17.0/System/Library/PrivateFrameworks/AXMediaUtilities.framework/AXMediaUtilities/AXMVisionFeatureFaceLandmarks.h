@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL is3DLandmarks;
@property (retain, nonatomic) NSDictionary *results;

+ (id)unitTestingFaceLandmarksIs3D:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)a0;
- (id)localizedStringForLandmarkType:(unsigned long long)a0;
- (id)initWithVisionFaceLandmarks:(id)a0;
- (id)pointsArrayForRegion:(id)a0;

@end
