@class CRTextRecognizerResults, NSArray, CRTextFeature, NSDate, CRTextDetectorResults;

@interface CRTextResults : NSObject

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) CRTextDetectorResults *detectorResults;
@property (retain, nonatomic) CRTextRecognizerResults *recognizerResults;
@property (retain, nonatomic) NSArray *textFeatures;
@property (retain, nonatomic) CRTextFeature *titleTextFeature;
@property long long filteredOutFeatureCount;
@property (readonly) NSArray *lineFeatures;

+ (id)linesFromTextFeatures:(id)a0;

- (void).cxx_destruct;

@end
