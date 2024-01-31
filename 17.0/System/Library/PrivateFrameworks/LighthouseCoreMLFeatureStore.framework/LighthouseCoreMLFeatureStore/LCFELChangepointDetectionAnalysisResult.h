@class NSString, NSNumber, NSArray;

@interface LCFELChangepointDetectionAnalysisResult : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSNumber *featureCount;
@property (readonly, nonatomic) NSNumber *detectedChangePointCount;
@property (readonly, nonatomic) NSArray *changepointTimestamps;

- (void).cxx_destruct;
- (id)init:(id)a0 featureCount:(id)a1 detectedChangePointCount:(id)a2 changepointTimestamps:(id)a3;

@end
