@class NSString;

@interface HKRegulatoryDomainManager : NSObject <HKRegulatoryDomainProvider> {
    id /* block */ _currentEstimatesProvider;
}

@property (class, copy, nonatomic) NSString *overrideISOCountryCode;

+ (BOOL)isOverridePresent;
+ (id)registerForUpdatesWithBlock:(id /* block */)a0 queue:(id)a1;
+ (BOOL)unregisterForUpdatesWithToken:(id)a0;

- (id)init;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)currentEstimate;
- (id)initWithCurrentEstimatesProvider:(id /* block */)a0;

@end
