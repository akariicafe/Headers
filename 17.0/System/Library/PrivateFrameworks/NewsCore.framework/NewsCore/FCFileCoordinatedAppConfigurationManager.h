@class NFUnfairLock, NSString, NSArray, FCFileCoordinatedDictionary;
@protocol FCJSONEncodableObjectProviding, FCNewsAppConfiguration;

@interface FCFileCoordinatedAppConfigurationManager : NSObject <FCAppConfigurationDropboxType, FCNewsAppConfigurationManager>

@property (readonly, nonatomic) NFUnfairLock *lock;
@property (copy, nonatomic) id<FCNewsAppConfiguration> fetchedAppConfiguration;
@property (readonly, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property (readonly, nonatomic) NSArray *treatmentIDs;
@property (readonly, nonatomic) NSArray *segmentSetIDs;
@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) id<FCNewsAppConfiguration, FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;

- (id)init;
- (void)addAppConfigObserver:(id)a0;
- (void)removeAppConfigObserver:(id)a0;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)a0 refreshCompletion:(id /* block */)a1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)_appConfigurationFromDictionary:(id)a0 forStorefrontID:(id)a1;
- (id)_dictionaryFromAppConfiguration:(id)a0;
- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (void)depositAppConfiguration:(id)a0;
- (id)initWithFileURL:(id)a0 storefrontID:(id)a1;

@end
