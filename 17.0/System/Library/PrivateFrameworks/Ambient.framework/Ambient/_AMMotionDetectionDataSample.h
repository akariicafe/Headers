@class NSArray;

@interface _AMMotionDetectionDataSample : NSObject

@property (retain, nonatomic) NSArray *data;
@property (nonatomic) double timestampSeconds;

+ (id)zeroMotionDataWithTimestamp:(double)a0;

- (id)description;
- (void).cxx_destruct;

@end
