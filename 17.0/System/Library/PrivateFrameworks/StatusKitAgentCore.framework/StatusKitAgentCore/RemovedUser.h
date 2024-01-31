@class NSString, NSDate;

@interface RemovedUser : NSManagedObject

@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (copy, nonatomic) NSString *removedHandle;
@property (copy, nonatomic) NSString *statusTypeIdentifier;

+ (id)fetchRequest;
+ (id)predicateForHandle:(id)a0;
+ (id)predicateForPresenceIdentifier:(id)a0;
+ (id)dateRemovedKeyPath;
+ (id)handleKeyPath;
+ (id)predicateForHandleString:(id)a0;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)presenceIdentifierKeyPath;
+ (id)statusTypeIdentifierKeyPath;

@end
