@class NSString, NSData, NSDate;

@interface SKADatabasePublishedLocalStatus : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *keyDomain;
@property (retain, nonatomic) NSString *keyName;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) long long targetDevicesFlags;

- (BOOL)isEqualToStatus:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoreDataPublishedLocalStatus:(id)a0;
- (id)initWithIdentifier:(id)a0 creationDate:(id)a1 modificationDate:(id)a2 keyDomain:(id)a3 keyName:(id)a4 payload:(id)a5 targetDevicesFlags:(long long)a6;

@end
