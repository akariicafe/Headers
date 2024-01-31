@class NSDictionary, NSArray, NSObject;
@protocol NSFastEnumeration, DNDSContactProviding, DNDSBackingStoreRecord, DNDSApplicationIdentifierMapping;

@interface DNDSBackingStoreDictionaryContext : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSObject<NSFastEnumeration> *underlyingHealingSource;
@property (retain, nonatomic) NSObject<DNDSBackingStoreRecord> *currentRecord;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long partitionType;
@property (readonly, nonatomic) BOOL redactSensitiveData;
@property (readonly, nonatomic) id<DNDSContactProviding> contactProvider;
@property (readonly, nonatomic) id<DNDSApplicationIdentifierMapping> applicationIdentifierMapper;
@property (readonly, nonatomic) NSDictionary *healingSource;
@property (readonly, nonatomic) NSArray *arrayHealingSource;

- (id)_initWithDestination:(unsigned long long)a0 partitionType:(unsigned long long)a1 healingSource:(id)a2 currentRecord:(id)a3 redactSensitiveData:(BOOL)a4 contactProvider:(id)a5 applicationIdentifierMapper:(id)a6;
- (id)initWithDestination:(unsigned long long)a0 partitionType:(unsigned long long)a1 redactSensitiveData:(BOOL)a2 contactProvider:(id)a3 applicationIdentifierMapper:(id)a4;
- (id)copyWithCurrentRecord:(id)a0;
- (id)_initWithContext:(id)a0;
- (id)initWithDestination:(unsigned long long)a0 partitionType:(unsigned long long)a1 healingSource:(id)a2 redactSensitiveData:(BOOL)a3 contactProvider:(id)a4 applicationIdentifierMapper:(id)a5;
- (id)initWithDestination:(unsigned long long)a0 partitionType:(unsigned long long)a1 currentRecord:(id)a2 redactSensitiveData:(BOOL)a3 contactProvider:(id)a4 applicationIdentifierMapper:(id)a5;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
