@class NSString, HKTaskServerProxyProvider, NSObject;
@protocol OS_dispatch_queue;

@interface FCCPluginClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)_pluginMessage:(unsigned long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pluginMessage:(unsigned long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;

@end
