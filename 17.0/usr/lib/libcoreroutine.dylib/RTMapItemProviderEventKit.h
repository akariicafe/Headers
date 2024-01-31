@class RTMapItemProviderEventKitParameters, NSString, RTEventManager, RTMapServiceManager;

@interface RTMapItemProviderEventKit : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTEventManager *eventManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, copy, nonatomic) RTMapItemProviderEventKitParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 eventManager:(id)a2 mapServiceManager:(id)a3 parameters:(id)a4;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 eventManager:(id)a2 mapServiceManager:(id)a3;

@end
