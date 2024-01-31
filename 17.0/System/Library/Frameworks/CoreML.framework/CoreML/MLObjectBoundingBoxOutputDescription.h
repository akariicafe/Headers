@class NSString, NSArray;

@interface MLObjectBoundingBoxOutputDescription : NSObject

@property int format;
@property (retain) NSString *confidenceFeatureName;
@property (retain) NSString *coordinatesFeatureName;
@property (retain) NSArray *labelNames;

- (void).cxx_destruct;

@end
