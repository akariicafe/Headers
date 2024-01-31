@class NSSet, IRServiceMO, IRReplayEventMO;

@interface IRCandidatesContainerMO : NSManagedObject

@property (retain, nonatomic) NSSet *candidates;
@property (retain, nonatomic) IRServiceMO *service;
@property (retain, nonatomic) IRReplayEventMO *replayEvent;

+ (id)fetchRequest;
+ (id)candidatesContainerMOFromCandidatesContainerDO:(id)a0 withReplayEventMO:(id)a1 managedObjectContext:(id)a2;
+ (void)setPropertiesOfCandidatesContainerMO:(id)a0 withCandidatesContainerDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
