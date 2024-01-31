@class NSString, NSSet, NSData, NSDate;

@interface PublishedLocalStatus : NSManagedObject

@property (class, readonly, nonatomic) NSString *identifierKeyPath;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *keyDomain;
@property (copy, nonatomic) NSString *keyName;
@property (copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) long long targetDevicesFlags;
@property (retain, nonatomic) NSSet *deliveredDevices;
@property (retain, nonatomic) NSSet *pendingDevices;

+ (id)fetchRequest;
+ (id)predicateForPublishedLocalStatusIdentifiers:(id)a0;

@end
