@interface CKDPowerLogger : NSObject

@property (class, readonly, getter=isEnabled) BOOL enabled;

+ (id)sharedLogger;

- (void)logOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 xpcActivityIdentifier:(id)a7 appContainerTuple:(id)a8;
- (id)zoneIDsToZoneNamesString:(id)a0;

@end
