@class NSArray, NSDictionary, NSMapTable, NSString, NSObject, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>

@property (class, readonly, copy, nonatomic) NSArray *defaultProviders;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUCallProviderManagerDataSource> dataSource;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (retain, nonatomic) NSMapTable *delegateToQueue;
@property (readonly, nonatomic) TUCallProvider *superboxProvider;
@property (readonly, nonatomic) TUCallProvider *tinCanProvider;
@property (readonly, nonatomic) TUCallProvider *defaultProvider;
@property (readonly, nonatomic) TUCallProvider *emergencyProvider;
@property (readonly, nonatomic) TUCallProvider *voicemailProvider;
@property (readonly, nonatomic) TUCallProvider *telephonyProvider;
@property (readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceForProvider:(id)a0 video:(BOOL)a1;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (id)initWithPairedHostDeviceProviders;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (id)dialRequestForRecentCall:(id)a0;
- (id)providersPassingTest:(id /* block */)a0;
- (id)providerForFavoritesEntry:(id)a0;
- (void)launchAppForDialRequest:(id)a0 completion:(id /* block */)a1;
- (id)providerForRecentCall:(id)a0;
- (id)providerWithIdentifier:(id)a0;
- (id)initWithLocalProviders;
- (void)providersChangedForDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)donateUserIntentForProviderWithIdentifier:(id)a0;
- (id)providerWithService:(int)a0 video:(BOOL *)a1;
- (id)initWithDataSource:(id)a0 type:(unsigned long long)a1 queue:(id)a2;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)a0;

@end
