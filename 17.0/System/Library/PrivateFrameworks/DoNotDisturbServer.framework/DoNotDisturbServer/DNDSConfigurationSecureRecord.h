@class NSSet, NSDictionary, DNDSSenderConfigurationRecord, NSString;

@interface DNDSConfigurationSecureRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration;
@property (readonly, copy, nonatomic) NSDictionary *allowedApplications;
@property (readonly, copy, nonatomic) NSSet *deniedApplications;
@property (readonly, copy, nonatomic) NSSet *allowedWebApplications;
@property (readonly, copy, nonatomic) NSSet *deniedWebApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)init;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithSenderConfiguration:(id)a0 allowedApplications:(id)a1 deniedApplications:(id)a2 allowedWebApplications:(id)a3 deniedWebApplications:(id)a4;
- (void)log:(id)a0 withPrefix:(id)a1;
- (id)_initWithRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
