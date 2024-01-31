@class NSData, NSArray;

@interface AXMScreenRecognitionVisionProcessingResult : NSObject

@property (nonatomic) BOOL sameScreenCapResult;
@property (retain, nonatomic) NSData *screenEquivalenceToken;
@property (retain, nonatomic) NSArray *sortedFeatures;

- (void).cxx_destruct;

@end
