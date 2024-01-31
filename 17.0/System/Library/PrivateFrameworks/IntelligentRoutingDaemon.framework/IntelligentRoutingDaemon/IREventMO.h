@class NSString, IRHistoryEventMO;

@interface IREventMO : NSManagedObject

@property (nonatomic) long long eventSubtype;
@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) IRHistoryEventMO *historyEvent;

+ (id)fetchRequest;
+ (id)IREventMOWithIREventDO:(id)a0 historyEventMO:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfEventMO:(id)a0 withEventDO:(id)a1;

- (id)convert;

@end
