@class RTMapItemProviderMapsSupportParameters, RTMapsSupportManager, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly, copy, nonatomic) RTMapItemProviderMapsSupportParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2;
- (double)confidenceFromMapItemSource:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2 parameters:(id)a3;

@end
