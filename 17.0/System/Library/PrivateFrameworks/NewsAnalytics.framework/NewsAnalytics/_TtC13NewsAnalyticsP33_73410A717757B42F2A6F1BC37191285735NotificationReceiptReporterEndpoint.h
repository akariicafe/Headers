@class NSString, NSURL;

@interface _TtC13NewsAnalyticsP33_73410A717757B42F2A6F1BC37191285735NotificationReceiptReporterEndpoint : _TtCs12_SwiftObject <AAEndpointProvider> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ defaultURL;
    void /* unknown type, empty encoding */ notificationReceiptURL;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;

- (id)endpointURLWithContentType:(long long)a0;

@end
