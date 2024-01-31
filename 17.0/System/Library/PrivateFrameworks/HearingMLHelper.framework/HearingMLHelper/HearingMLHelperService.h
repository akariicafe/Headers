@class NSString, NSObject, NSXPCConnection;
@protocol HearingMLHelperServiceDelegate, OS_dispatch_queue;

@interface HearingMLHelperService : NSObject <HearingMLHelperServiceInterfaceProtocol> {
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<HearingMLHelperServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_destroyXPCConnection;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (void)trainWithDetectorID:(id)a0 hallucinatorPath:(id)a1 pretrainedWeightsPath:(id)a2 resultHandler:(id /* block */)a3;

@end
