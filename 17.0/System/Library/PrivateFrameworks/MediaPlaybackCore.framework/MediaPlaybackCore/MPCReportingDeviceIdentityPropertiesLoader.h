@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}

@property (class, readonly, nonatomic) MPCReportingDeviceIdentityPropertiesLoader *sharedLoader;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(id /* block */)a0;

@end
