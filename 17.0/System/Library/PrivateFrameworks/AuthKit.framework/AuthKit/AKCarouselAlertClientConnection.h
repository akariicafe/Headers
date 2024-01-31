@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AKCarouselAlertClientConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedConnection;

- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)unsafe_invalidate;
- (void)dismissAlert:(id)a0;
- (void)presentAlertWithDictionary:(id)a0 completion:(id /* block */)a1;

@end
