@class IDSService, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NPKTargetDeviceAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NSMutableDictionary *outstandingAssertionStatusUpdaters;
@property (retain, nonatomic) NSMutableDictionary *assertTypesUUIDsMap;
@property (readonly, nonatomic) IDSService *transportationService;

- (void).cxx_destruct;
- (id)_IDSSendOptions;
- (void)_addOutstandingAssertionStatusUpdater:(id)a0 withAssertType:(int)a1;
- (id)_outstandingAssertionStatusUpdaterWithRequest:(id)a0 assertionType:(unsigned long long)a1 assertionUUID:(id)a2;
- (id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)a0;
- (id)_sendAssertionRequest:(id)a0;
- (id)acquireAssertionOfType:(unsigned long long)a0;
- (id)assertionsUUIDsOfType:(unsigned long long)a0;
- (id)initWithTransportationService:(id)a0;
- (void)invalidateAssertionWithUUID:(id)a0;

@end
