@class NSString, RTDistanceCalculator, RTLearnedLocationStore, RTVisitManager, RTLocationManager, RTMapServiceManager;

@interface RTPlaceTypeClassifierExpertFallback : NSObject <RTPlaceTypeProvider>

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)classifyWithError:(id *)a0;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 locationManager:(id)a2 mapServiceManager:(id)a3 visitManager:(id)a4;
- (id)updatePlace:(id)a0;

@end
