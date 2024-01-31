@class NSSet, IRServiceMO;

@interface IRReplayEventsContainerMO : NSManagedObject

@property (retain, nonatomic) NSSet *replayEvent;
@property (retain, nonatomic) IRServiceMO *service;

+ (id)fetchRequest;

- (id)convert;

@end
