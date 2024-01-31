@class NSString, NSSet, IRReplayEventMO, NSDate;

@interface IRMiLoLSLPredictionMO : NSManagedObject

@property (copy, nonatomic) NSString *predictionId;
@property (retain, nonatomic) NSSet *nearbyDevices;
@property (retain, nonatomic) IRReplayEventMO *replayEvent;
@property (retain, nonatomic) NSSet *scores;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (nonatomic) long long miLoServiceQuality;
@property (retain, nonatomic) NSDate *predictionTime;
@property (nonatomic) long long confidence;
@property (nonatomic) long long confidenceReasonBitmap;

+ (id)fetchRequest;
+ (id)miLoLSLPredictionMOWithMiLoLSLPredictionDO:(id)a0 replayEvent:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfMiLoLSLPredictionMO:(id)a0 withMiLoLSLPredictionDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
