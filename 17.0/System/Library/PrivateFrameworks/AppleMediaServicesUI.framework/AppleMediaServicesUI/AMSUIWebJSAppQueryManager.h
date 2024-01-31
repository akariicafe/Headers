@class NSString, NSMutableDictionary;
@protocol AMSUIWebJSAppQueryManagerDelegate;

@interface AMSUIWebJSAppQueryManager : NSObject <ASDAppQueryResultsObserver>

@property (weak, nonatomic) id<AMSUIWebJSAppQueryManagerDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *observingQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;
- (void)stopObservingAppsWithBundleIDs:(id)a0;
- (id)_encodeApp:(id)a0;
- (id)_executeAppQuery:(id)a0;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)a0;
- (id)queryAppsWithBundleIDs:(id)a0 startObserving:(BOOL)a1;
- (id)queryAppsWithStoreItemIDs:(id)a0 startObserving:(BOOL)a1;
- (void)stopObservingAllApps;
- (void)stopObservingAppsWithStoreItemIDs:(id)a0;

@end
