@class NSString, IRHistoryEventMO;

@interface IRMiLoPredictionEventMO : NSManagedObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *predictionId;
@property (retain, nonatomic) NSString *labelRealTime;
@property (retain, nonatomic) NSString *predictionIdRealTime;
@property (retain, nonatomic) IRHistoryEventMO *historyEvent;

+ (id)fetchRequest;
+ (void)setPropertiesOfMiloPredictionEventMO:(id)a0 withMiloPredictionEventDO:(id)a1;
+ (id)miloPredictionEventMOWithmiloPredictionEventDO:(id)a0 historyEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
