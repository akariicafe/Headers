@class _HMContext, HMHomeManager, NSString;

@interface HMWidgetManager : NSObject <HMFLogging>

@property (readonly, weak) HMHomeManager *homeManager;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchStateForCharacteristics:(id)a0 completion:(id /* block */)a1;
- (id)initWithHomeManager:(id)a0 context:(id)a1;
- (void)monitorAndFetchStateForCharacteristics:(id)a0 widgetIdentifier:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)performWriteRequests:(id)a0 forKind:(id)a1 completion:(id /* block */)a2;

@end
