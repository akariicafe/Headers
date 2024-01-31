@class NSString, NSXPCConnection, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor> {
    NSXPCConnection *_connection;
    CLLocation *_location;
    long long _connectionWindowRetainCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)_queue_clearConnection;
- (void)_queue_setLocation:(id)a0;
- (void)_queue_setupConnection;

@end
