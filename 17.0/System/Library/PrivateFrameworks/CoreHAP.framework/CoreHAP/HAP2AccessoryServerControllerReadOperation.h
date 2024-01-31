@class NSIndexSet, HAP2ControllerReadRequest;

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {
    NSIndexSet *_cachedCharacteristicIndices;
    HAP2ControllerReadRequest *_readRequest;
}

- (void).cxx_destruct;
- (void)_cleanUp;
- (id)_HAP2AutoUpdateCachedCountdownCharacteristic:(id)a0;
- (void)_sendRequest;
- (id)initWithName:(id)a0 controller:(id)a1 encoding:(id)a2 transport:(id)a3 readRequest:(id)a4 endpoint:(id)a5 mimeType:(id)a6 timeout:(double)a7 options:(unsigned long long)a8;

@end
