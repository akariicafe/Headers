@class NSDate;

@interface PromotedContent.MetricEventsTracker : _TtCs12_SwiftObject <APPCMetricEventsTracking> {
    void /* unknown type, empty encoding */ finalPromotedContent;
    void /* unknown type, empty encoding */ placeholderPlacedTimestamp;
    void /* unknown type, empty encoding */ replacedPlaceholderTimestamp;
    void /* unknown type, empty encoding */ adRequestTimestamp;
    void /* unknown type, empty encoding */ adResponseTimestamp;
    void /* unknown type, empty encoding */ prerollAdRequestTimestamp;
    void /* unknown type, empty encoding */ prerollAdResponseTimestamp;
    void /* unknown type, empty encoding */ analyticsEventName;
    void /* unknown type, empty encoding */ intervalKey;
    void /* unknown type, empty encoding */ intervalTypeKey;
    void /* unknown type, empty encoding */ networkTypeKey;
    void /* unknown type, empty encoding */ placementTypeKey;
    void /* unknown type, empty encoding */ failedKey;
}

@property (nonatomic, copy) NSDate *placeholderPlacedTimestamp;
@property (nonatomic, copy) NSDate *replacedPlaceholderTimestamp;
@property (nonatomic, copy) NSDate *adResponseTimestamp;
@property (nonatomic, copy) NSDate *prerollAdRequestTimestamp;
@property (nonatomic, copy) NSDate *prerollAdResponseTimestamp;

- (void)didPlacePlaceholder;
- (void)didReceiveAdResponse;
- (void)didReceivePrerollVideoResponse;
- (void)didReplacePlaceholder;
- (void)didRequestPrerollVideo;
- (void)sendAnalyticsEventFor:(long long)a0 interval:(double)a1 networkType:(unsigned long long)a2 placementType:(unsigned long long)a3 failed:(BOOL)a4;

@end
