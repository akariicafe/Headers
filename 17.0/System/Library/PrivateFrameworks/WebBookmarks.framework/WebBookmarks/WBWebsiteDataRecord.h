@class NSString, NSMutableSet, NSObject;
@protocol OS_xpc_object;

@interface WBWebsiteDataRecord : NSObject

@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long usage;
@property (readonly, nonatomic) NSMutableSet *profileIdentifiers;

+ (id)websiteDataRecordFromXPCDictionary:(id)a0;
+ (id)websiteDataRecordWithDomain:(id)a0 profileIdentifiers:(id)a1;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)a0 profileIdentifiers:(id)a1;
- (id)_initWithDomain:(id)a0 usage:(unsigned long long)a1 profileIdentifiers:(id)a2;

@end
