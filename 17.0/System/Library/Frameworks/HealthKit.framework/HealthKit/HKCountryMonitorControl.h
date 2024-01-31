@class NSString, HKProxyProvider;

@interface HKCountryMonitorControl : NSObject <_HKXPCExportable, HKCountryMonitorControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (void)checkCurrentCountry;
+ (void)checkCurrentCountryWithHealthStore:(id)a0;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)dealloc;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;

@end
