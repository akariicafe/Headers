@class NSObject, NSString, SKUIMetricsImpressionSession, SSMetricsController, SSMetricsConfiguration, NSNumber;
@protocol OS_dispatch_source;

@interface SKUIMetricsController : NSObject {
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    SSMetricsController *_controller;
    BOOL _flushesImmediately;
    BOOL _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    BOOL _loggingEnabled;
}

@property (readonly, nonatomic) SKUIMetricsImpressionSession *activeImpressionsSession;
@property (readonly, nonatomic) double flushInterval;
@property (readonly, nonatomic) SSMetricsConfiguration *globalConfiguration;
@property (retain, nonatomic) SSMetricsConfiguration *pageConfiguration;
@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *pageContext;
@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *windowOrientation;

+ (void)flushImmediately;

- (void)dealloc;
- (id)compoundStringWithElements:(id)a0;
- (id)tokenStringWithElements:(id)a0;
- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (id)initWithGlobalConfiguration:(id)a0;
- (id)locationWithPosition:(long long)a0 type:(id)a1 fieldData:(id)a2;
- (void)flushImmediately;
- (void)_insertEvent:(id)a0;
- (void)_recordActiveImpressions;
- (void)_waitUntilRecordingComplete;
- (BOOL)canRecordEventWithType:(id)a0;
- (id)clickEventWithItem:(id)a0 locationPosition:(long long)a1;
- (void)closeImpressionsSession;
- (id)itemOfferClickEventWithItem:(id)a0 locationPosition:(long long)a1;
- (id)locationWithPageComponent:(id)a0;
- (id)performActionForItem:(id)a0;
- (id)performActionForItem:(id)a0 clientContext:(id)a1;
- (id)performActionForItem:(id)a0 offer:(id)a1 clientContext:(id)a2;
- (id)performActionForItem:(id)a0 offer:(id)a1 clientContext:(id)a2 completionBlock:(id /* block */)a3;
- (id)performActionForSoftwareItem:(id)a0 offer:(id)a1 clientContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)pingURLs:(id)a0;
- (void)pingURLs:(id)a0 withClientContext:(id)a1;
- (void)recordBuyConfirmedEventsForItems:(id)a0 purchaseResponses:(id)a1;

@end
