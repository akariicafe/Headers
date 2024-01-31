@class NSString, NSData, NSDate;

@interface SubscribedLocalStatus : NSManagedObject

@property (class, readonly, nonatomic) NSString *idsIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *identifierKeyPath;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *keyDomain;
@property (copy, nonatomic) NSString *keyName;
@property (copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSData *payload;

+ (id)fetchRequest;
+ (id)predicateForSubscribedLocalStatusIDSIdentifier:(id)a0;
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)a0;
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)a0 idsIdentifier:(id)a1;

@end
