@class NSArray, NSSet;

@interface HDAlarmEventChanges : NSObject

@property (readonly, copy, nonatomic) NSArray *oldEvents;
@property (readonly, copy, nonatomic) NSArray *scheduledEvents;
@property (readonly, copy, nonatomic) NSSet *removedEvents;
@property (readonly, copy, nonatomic) NSSet *addedEvents;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOldEvents:(id)a0 scheduledEvents:(id)a1;

@end
