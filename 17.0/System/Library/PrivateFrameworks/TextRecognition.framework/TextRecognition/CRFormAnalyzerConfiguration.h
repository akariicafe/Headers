@class NSURL;

@interface CRFormAnalyzerConfiguration : NSObject

@property (nonatomic) BOOL cpuOnly;
@property (nonatomic) BOOL gatingWithOCRResults;
@property (nonatomic) BOOL resizeInputImage;
@property (nonatomic) BOOL tileInputImage;
@property (nonatomic) BOOL useContourBasedDetection;
@property (nonatomic) BOOL useModelBasedDetection;
@property (nonatomic) BOOL useTextBasedDetection;
@property (retain, nonatomic) NSURL *customModelURL;

- (id)init;
- (void).cxx_destruct;

@end
