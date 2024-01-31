@class NSString, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, BLSFlipbookDiagnosticsProviding;

@interface BLSHDiagnosticsServer : NSObject <BSServiceConnectionListenerDelegate> {
    id<BLSFlipbookDiagnosticsProviding> _flipbookDiagnosticsProvider;
    BSServiceConnectionListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainSpecification;
+ (id)serverWithFlipbookDiagnosticsProvider:(id)a0;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (id)initWithFlipbookDiagnosticsProvider:(id)a0;

@end
