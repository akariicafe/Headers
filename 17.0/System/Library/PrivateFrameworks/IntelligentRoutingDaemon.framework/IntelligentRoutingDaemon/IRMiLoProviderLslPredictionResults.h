@class NSUUID, NSArray, NSDate;

@interface IRMiLoProviderLslPredictionResults : NSObject

@property (retain, nonatomic) NSUUID *predictionId;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (retain, nonatomic) NSArray *predictedEvents;
@property (retain, nonatomic) NSArray *nearbyDevices;
@property (retain, nonatomic) NSDate *predictionTime;
@property (nonatomic) long long confidence;
@property (nonatomic) long long confidenceReasonBitmap;

- (void).cxx_destruct;
- (long long)_bitmapFromConfidenceReasonArray:(id)a0;
- (id)initWithMiloPrediction:(id)a0 withMiLoServiceQuality:(long long)a1 withMiLoServiceQualityReasonBitmap:(long long)a2;

@end
