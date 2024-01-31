@class IRReplayEventsContainerMO, NSString, IRSystemStateMO, IRNearbyDeviceContainerMO, NSDate, IRCandidatesContainerMO, IRMiLoLSLPredictionMO;

@interface IRReplayEventMO : NSManagedObject

@property (copy, nonatomic) NSString *contextChangeReason;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) IRCandidatesContainerMO *candidatesContainer;
@property (retain, nonatomic) IRMiLoLSLPredictionMO *miloLslPrediction;
@property (retain, nonatomic) IRReplayEventsContainerMO *replayEventsContainer;
@property (retain, nonatomic) IRSystemStateMO *systemState;
@property (retain, nonatomic) IRNearbyDeviceContainerMO *nearbyDeviceContainer;

+ (id)fetchRequest;
+ (id)replayEventMOWithReplayEventDO:(id)a0 replayEventsContainerMO:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfReplayEventMO:(id)a0 withReplayEventDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
