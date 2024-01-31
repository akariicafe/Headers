@class DSXPCServer, CBAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface DSAdvertiseManager : NSObject {
    CBAdvertiser *_bleAdvertiser;
    unsigned char _cbVehicleState;
    unsigned char _cbVehicleConfidence;
    unsigned char _cbDSActionFlags;
    unsigned char _cbTieBreaker;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) DSXPCServer *xpcDaemonServer;
@property (nonatomic) unsigned long long dsAdvertiseFlags;

- (void)stopAdvertising;
- (void).cxx_destruct;
- (void)startAdvertising;
- (void)_setDSActionFieldsInAdvertiser:(id)a0;
- (BOOL)_getAdvertisementFields;
- (void)_setDSInfoFieldsInAdvertiser:(id)a0;

@end
