@class NSString, NSDictionary, RTRoutineManager, NSMapTable, NSMutableDictionary, NSLock;

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties> {
    RTRoutineManager *_manager;
    NSMapTable *_routineData;
    NSMutableDictionary *_overrideRoutineType;
    NSLock *_routineDataLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *routineDataByEngine;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (id)_init;
- (void)update;
- (void).cxx_destruct;
- (id)predictedLocationNameForEngine:(id)a0;
- (void)_setOverrideLocation:(long long)a0 forEngine:(id)a1;
- (id)locationForEngine:(id)a0 userLocation:(long long)a1;
- (id)_routineDataForEngine:(id)a0;
- (void)addRelevanceEngine:(id)a0;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)locationManagerDidUpdateLocation:(id)a0;
- (id)predictedLocationIdentifierForEngine:(id)a0;
- (void)removeRelevanceEngine:(id)a0;

@end
