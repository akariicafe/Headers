@class MTRDevice;

@interface MTRClusterWindowCovering : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)downOrCloseWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)downOrCloseWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)downOrCloseWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)downOrCloseWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)goToLiftPercentageWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)goToLiftPercentageWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)goToLiftValueWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)goToLiftValueWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)goToTiltPercentageWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)goToTiltPercentageWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)goToTiltValueWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)goToTiltValueWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeConfigStatusWithParams:(id)a0;
- (id)readAttributeCurrentPositionLiftPercent100thsWithParams:(id)a0;
- (id)readAttributeCurrentPositionLiftPercentageWithParams:(id)a0;
- (id)readAttributeCurrentPositionLiftWithParams:(id)a0;
- (id)readAttributeCurrentPositionTiltPercent100thsWithParams:(id)a0;
- (id)readAttributeCurrentPositionTiltPercentageWithParams:(id)a0;
- (id)readAttributeCurrentPositionTiltWithParams:(id)a0;
- (id)readAttributeEndProductTypeWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeInstalledClosedLimitLiftWithParams:(id)a0;
- (id)readAttributeInstalledClosedLimitTiltWithParams:(id)a0;
- (id)readAttributeInstalledOpenLimitLiftWithParams:(id)a0;
- (id)readAttributeInstalledOpenLimitTiltWithParams:(id)a0;
- (id)readAttributeModeWithParams:(id)a0;
- (id)readAttributeNumberOfActuationsLiftWithParams:(id)a0;
- (id)readAttributeNumberOfActuationsTiltWithParams:(id)a0;
- (id)readAttributeOperationalStatusWithParams:(id)a0;
- (id)readAttributePhysicalClosedLimitLiftWithParams:(id)a0;
- (id)readAttributePhysicalClosedLimitTiltWithParams:(id)a0;
- (id)readAttributeSafetyStatusWithParams:(id)a0;
- (id)readAttributeTargetPositionLiftPercent100thsWithParams:(id)a0;
- (id)readAttributeTargetPositionTiltPercent100thsWithParams:(id)a0;
- (id)readAttributeTypeWithParams:(id)a0;
- (void)stopMotionWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)stopMotionWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopMotionWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stopMotionWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)upOrOpenWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)upOrOpenWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)upOrOpenWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)upOrOpenWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAttributeModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
