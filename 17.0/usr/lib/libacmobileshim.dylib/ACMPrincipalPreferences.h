@class NSString, ACFPrincipal, NSNumber;
@protocol ACMPreferencesStore;

@interface ACMPrincipalPreferences : ACMPreferences <ACMPrincipalPreferences>

@property (retain) ACFPrincipal *principal;
@property (copy, nonatomic) NSString *clientSecret;
@property (copy, nonatomic) NSNumber *clientSecretCreateDate;
@property (copy, nonatomic) NSNumber *personID;
@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesForPrincipal:(id)a0;

- (id)userName;
- (void)dealloc;
- (id)realm;
- (id)initWithPrincipal:(id)a0;

@end
