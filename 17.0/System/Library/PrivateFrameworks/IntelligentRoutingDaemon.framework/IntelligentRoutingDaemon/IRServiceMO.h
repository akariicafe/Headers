@class IRReplayEventsContainerMO, NSString, IRMiLoServiceMO, IRStatisticsMO, NSDate, IRCandidatesContainerMO, IRHistoryEventsContainerMO;

@interface IRServiceMO : NSManagedObject

@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) long long servicePackage;
@property (retain, nonatomic) IRCandidatesContainerMO *candidatesContainer;
@property (retain, nonatomic) IRHistoryEventsContainerMO *historyContainer;
@property (retain, nonatomic) IRMiLoServiceMO *miloService;
@property (retain, nonatomic) IRReplayEventsContainerMO *replayEventContainer;
@property (retain, nonatomic) IRStatisticsMO *statistics;

+ (id)fetchRequest;
+ (id)MOService:(id)a0 inManagedObjectContext:(id)a1;
+ (void)setPropertiesOfServiceMO:(id)a0 withServiceDO:(id)a1;

- (id)convert;

@end
