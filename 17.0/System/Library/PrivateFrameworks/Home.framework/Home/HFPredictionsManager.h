@class NSArray, NAFuture, NSString, NSObject, HMHome;
@protocol HFPredictionsController, OS_dispatch_queue, HFPredictionsManagerDelegate;

@interface HFPredictionsManager : NSObject <HMUserActionPredictionControllerDelegate>

@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) id<HFPredictionsController> predictionsController;
@property (nonatomic) unsigned long long predictionLimit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictionQueue;
@property (nonatomic) BOOL wasQueriedForInFlightPredictions;
@property (retain, nonatomic) NAFuture *initialPredictionUpdateFuture;
@property (weak, nonatomic) id<HFPredictionsManagerDelegate> delegate;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *filterTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)userActionPredictionController:(id)a0 didUpdatePredictions:(id)a1;
- (id)_homeKitObjectForAccessoryUUID:(id)a0;
- (id)_homeKitObjectForMediaSystemUUID:(id)a0;
- (id)_homeKitObjectForSceneUUID:(id)a0;
- (id)_homeKitObjectForServiceGroupUUID:(id)a0;
- (id)_homeKitObjectForServiceUUID:(id)a0;
- (id)_processUserActionPredictions:(id)a0;
- (void)_queryUserActionPredictions;
- (void)_queryUserActionPredictionsOnQueue;
- (id)fetchUserActionPredictions;
- (id)fetchUserActionPredictionsAndWaitForInitialUpdate:(BOOL)a0;
- (id)initWithHome:(id)a0 predictionsController:(id)a1 delegate:(id)a2 predictionLimit:(unsigned long long)a3;
- (id)initWithHome:(id)a0 predictionsController:(id)a1 delegate:(id)a2 predictionLimit:(unsigned long long)a3 filterTypes:(id)a4;

@end
