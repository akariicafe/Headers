@protocol AAFAnalyticsTransport;

@interface AAFAnalyticsReporter : NSObject

@property (retain, nonatomic) id<AAFAnalyticsTransport> transport;

+ (id)analyticsReporterWithTransport:(id)a0;

- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)_sendEvent:(id)a0;
- (id)initWithTransport:(id)a0;

@end
