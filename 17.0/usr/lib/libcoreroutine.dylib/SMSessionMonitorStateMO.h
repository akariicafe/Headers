@class NSUUID, NSDate;

@interface SMSessionMonitorStateMO : NSManagedObject

@property (nonatomic) short currentRegionState;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) BOOL triggerConfirmed;
@property (nonatomic) BOOL triggerPending;

+ (id)fetchRequest;
+ (id)initWithSessionMonitorState:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSessionIdentifier:(id)a0 currentRegionState:(unsigned long long)a1 triggerPending:(BOOL)a2 triggerConfirmed:(BOOL)a3 date:(id)a4 managedObjectContext:(id)a5;

@end
