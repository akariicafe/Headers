@class NSString, NSData, NSDate;

@interface PendingPublishRequest : NSManagedObject

@property (class, readonly, nonatomic) NSString *statusUniqueIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *dateCreatedKeyPath;
@property (class, readonly, nonatomic) NSString *statusTypeIdentifierKeyPath;

@property (copy, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSData *payloadData;
@property (nonatomic) int retryCount;
@property (copy, nonatomic) NSString *statusTypeIdentifier;
@property (copy, nonatomic) NSString *statusUniqueIdentifier;

+ (id)fetchRequest;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)predicateForStatusUniqueIdentifier:(id)a0;
+ (id)sortDescriptorForDateCreatedAscending:(BOOL)a0;

@end
