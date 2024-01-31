@interface MKFLocalSettings : NSManagedObject

@property (nonatomic) BOOL accessAllowedWhenLocked;

+ (id)fetchRequest;

@end
