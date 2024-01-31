@class NSString, NSData, NSDate;

@interface SKADatabaseSubscribedLocalStatus : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *keyName;
@property (retain, nonatomic) NSString *keyDomain;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSString *idsIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoreDataSubscirbedLocalStatus:(id)a0;
- (id)initWithIdentifier:(id)a0 creationDate:(id)a1 modificationDate:(id)a2 keyName:(id)a3 keyDomain:(id)a4 payload:(id)a5 idsIdentifier:(id)a6;

@end
