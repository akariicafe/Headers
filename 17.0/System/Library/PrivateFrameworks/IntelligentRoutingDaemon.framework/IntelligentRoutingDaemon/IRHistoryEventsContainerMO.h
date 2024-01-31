@class IRServiceMO, NSSet;

@interface IRHistoryEventsContainerMO : NSManagedObject

@property (retain, nonatomic) IRServiceMO *service;
@property (retain, nonatomic) NSSet *historyEvents;

+ (id)fetchRequest;

@end
