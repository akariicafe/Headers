@class NSArray;
@protocol FCNewsAppConfiguration, FCCoreConfiguration;

@interface StocksCore.NewsConfigurationManager : NSObject <FCCoreConfigurationManager, FCNewsAppConfigurationManager> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ coreConfigObservers;
    void /* unknown type, empty encoding */ appConfigObservers;
    void /* unknown type, empty encoding */ lastKnownAppConfig;
    void /* unknown type, empty encoding */ lastKnownNewsConfig;
    void /* unknown type, empty encoding */ configLock;
}

@property (nonatomic, readonly) id<FCCoreConfiguration> configuration;
@property (nonatomic, readonly) NSArray *treatmentIDs;
@property (nonatomic, readonly) NSArray *segmentSetIDs;
@property (nonatomic, readonly) id<FCNewsAppConfiguration> appConfiguration;
@property (nonatomic, readonly) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;

- (void)addAppConfigObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)removeAppConfigObserver:(id)a0;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)a0 refreshCompletion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
