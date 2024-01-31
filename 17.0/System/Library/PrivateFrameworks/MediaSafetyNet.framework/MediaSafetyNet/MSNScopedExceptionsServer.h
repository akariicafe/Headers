@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MSNScopedExceptionsServer : NSObject <NSXPCListenerDelegate, MSNScopedExceptionsProtocol> {
    NSXPCListener *_listener;
    NSMutableArray *_activeExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;
+ (id)validExceptions;
+ (id)proxiesForException:(id)a0;
+ (id)proxyForMachServiceName:(id)a0;
+ (id)sharedCamProxy;
+ (id)sharedMicProxy;
+ (id)validEntitlements;

- (id)initWithQueue:(id)a0;
- (BOOL)isExceptionInEffect:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)endException:(id)a0;
- (void)beginException:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnectionAllowedToAssertException:(id)a0;

@end
