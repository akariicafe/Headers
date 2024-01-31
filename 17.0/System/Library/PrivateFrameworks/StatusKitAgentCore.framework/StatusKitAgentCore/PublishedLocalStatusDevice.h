@class NSString, NSSet;

@interface PublishedLocalStatusDevice : NSManagedObject

@property (class, readonly, nonatomic) NSString *idsIdentifierKeyPath;

@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSSet *deliveredStatuses;
@property (retain, nonatomic) NSSet *pendingStatuses;

+ (id)fetchRequest;
+ (id)predicateForPublishedLocalStatusDeviceIdentifiers:(id)a0;

@end
