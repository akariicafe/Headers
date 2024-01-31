@class NSString, ASDServiceBroker;

@interface ASDInstallWebAttributionService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (class, readonly) ASDInstallWebAttributionService *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (void).cxx_destruct;
- (void)addInstallWebAttributionParamsWithConfig:(id)a0 completionHandler:(id /* block */)a1;

@end
