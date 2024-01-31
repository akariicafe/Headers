@class NSString, BMAccessServiceListener;
@protocol BMAccessDelegate;

@interface BMAccessServer : NSObject <BMAccessServer> {
    BMAccessServiceListener *_listener;
}

@property (retain, nonatomic) id<BMAccessDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureConnectionForUseCase:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestBiomeEndpoint:(BOOL)a0 reply:(id /* block */)a1;
- (id)initWithListener:(id)a0;
- (void)requestBiomeEndpointForAppScopedService:(BOOL)a0 reply:(id /* block */)a1;
- (BOOL)_createDirectoryAtPath:(id)a0;
- (BOOL)_hasDirectoryAtPath:(id)a0;
- (void)requestAccessToResource:(id)a0 withMode:(unsigned long long)a1 reply:(id /* block */)a2;

@end
