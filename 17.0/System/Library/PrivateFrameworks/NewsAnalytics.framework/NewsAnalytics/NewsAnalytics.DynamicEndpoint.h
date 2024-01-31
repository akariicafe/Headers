@class NSURL, NSString;

@interface NewsAnalytics.DynamicEndpoint : _TtCs12_SwiftObject <AAEndpointProvider> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ environment;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;

- (id)endpointURLWithContentType:(long long)a0;

@end
