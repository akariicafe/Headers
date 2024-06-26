@class MTRBaseDevice;

@interface MTRBaseClusterBallastConfiguration : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBallastFactorAdjustmentWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBallastFactorAdjustmentWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBallastStatusWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBallastStatusWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeIntrinsicBalanceFactorWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeIntrinsicBallastFactorWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampAlarmModeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampAlarmModeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampBurnHoursTripPointWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampBurnHoursTripPointWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampBurnHoursWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampBurnHoursWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampManufacturerWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampManufacturerWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampQuantityWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampQuantityWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampRatedHoursWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampRatedHoursWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLampTypeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLampTypeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMaxLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMinLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMinLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePhysicalMaxLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePhysicalMaxLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePhysicalMinLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePhysicalMinLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBallastFactorAdjustmentWithCompletion:(id /* block */)a0;
- (void)readAttributeBallastFactorAdjustmentWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBallastStatusWithCompletion:(id /* block */)a0;
- (void)readAttributeBallastStatusWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeIntrinsicBalanceFactorWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeIntrinsicBallastFactorWithCompletion:(id /* block */)a0;
- (void)readAttributeLampAlarmModeWithCompletion:(id /* block */)a0;
- (void)readAttributeLampAlarmModeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampBurnHoursTripPointWithCompletion:(id /* block */)a0;
- (void)readAttributeLampBurnHoursTripPointWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampBurnHoursWithCompletion:(id /* block */)a0;
- (void)readAttributeLampBurnHoursWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampManufacturerWithCompletion:(id /* block */)a0;
- (void)readAttributeLampManufacturerWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampQuantityWithCompletion:(id /* block */)a0;
- (void)readAttributeLampQuantityWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampRatedHoursWithCompletion:(id /* block */)a0;
- (void)readAttributeLampRatedHoursWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLampTypeWithCompletion:(id /* block */)a0;
- (void)readAttributeLampTypeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMaxLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMinLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeMinLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePhysicalMaxLevelWithCompletion:(id /* block */)a0;
- (void)readAttributePhysicalMaxLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePhysicalMinLevelWithCompletion:(id /* block */)a0;
- (void)readAttributePhysicalMinLevelWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBallastFactorAdjustmentWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeBallastFactorAdjustmentWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBallastStatusWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeBallastStatusWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeIntrinsicBalanceFactorWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeIntrinsicBallastFactorWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampAlarmModeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampAlarmModeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampBurnHoursTripPointWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampBurnHoursTripPointWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampBurnHoursWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampBurnHoursWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampManufacturerWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampManufacturerWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampQuantityWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampQuantityWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampRatedHoursWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampRatedHoursWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLampTypeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeLampTypeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMaxLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMinLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMinLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePhysicalMaxLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePhysicalMaxLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePhysicalMinLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePhysicalMinLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeIntrinsicBallastFactorWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeIntrinsicBallastFactorWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampTypeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeLampTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLampTypeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeLampTypeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeMaxLevelWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeMaxLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxLevelWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeMaxLevelWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeMinLevelWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeMinLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinLevelWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeMinLevelWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;

@end
