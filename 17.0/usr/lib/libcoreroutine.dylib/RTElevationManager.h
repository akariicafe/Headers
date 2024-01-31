@class RTElevationProvider, NSString, RTElevationStore;

@interface RTElevationManager : RTService <RTPurgable>

@property (retain, nonatomic) RTElevationStore *elevationStore;
@property (retain, nonatomic) RTElevationProvider *elevationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)addElevations:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_addElevations:(id)a0 handler:(id /* block */)a1;
- (void)_fetchElevationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeElevationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)fetchElevationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithElevationStore:(id)a0 elevationProvider:(id)a1;
- (void)purgeElevationsPredating:(id)a0 handler:(id /* block */)a1;

@end
