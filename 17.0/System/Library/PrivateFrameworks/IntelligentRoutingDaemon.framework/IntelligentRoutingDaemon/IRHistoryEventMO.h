@class IRSystemStateMO, NSString, IREventMO, NSDate, IRHistoryEventsContainerMO, IRMiLoPredictionEventMO;

@interface IRHistoryEventMO : NSManagedObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *candidateIdenfifier;
@property (retain, nonatomic) IREventMO *event;
@property (retain, nonatomic) IRHistoryEventsContainerMO *historyEventsContainer;
@property (retain, nonatomic) IRMiLoPredictionEventMO *miloPredictionEvent;
@property (retain, nonatomic) IRSystemStateMO *systemState;

+ (id)fetchRequest;
+ (id)historyEventMOWithhistoryEventDO:(id)a0 historyEventsContainerMO:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfhistoryEventMO:(id)a0 withhistoryEventDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
