@class NSArray, NSDictionary, NSDate, NSMutableArray;

@interface CRTextDetectorResults : NSObject

@property (retain, nonatomic) NSDictionary *inputOptions;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSArray *textFeatures;
@property (retain, nonatomic) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSArray *pyramidPostIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSArray *pyramidPostInterScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize;
@property (retain, nonatomic) NSMutableArray *pyramidScaleName;
@property (retain, nonatomic) NSArray *detectedTables;

- (void).cxx_destruct;

@end
