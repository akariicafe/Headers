@class NSString;

@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)policyWithNoDelay;
+ (id)policyWithThrottlingDelayForString:(id)a0;

- (double)delayBeforeBeginningNetworkActivity;
- (BOOL)shouldSearchServers;

@end
