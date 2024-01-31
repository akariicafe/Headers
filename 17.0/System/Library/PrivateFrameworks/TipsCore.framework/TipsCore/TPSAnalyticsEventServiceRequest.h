@class NSString, NSURL;

@interface TPSAnalyticsEventServiceRequest : TPSAnalyticsEvent {
    NSString *_type;
    NSURL *_url;
    long long _statusCode;
    NSString *_etag;
    unsigned long long _requestTime;
    unsigned long long _requestTtfb;
    long long _responseHeadersSize;
    long long _responseSize;
    unsigned long long _responseTime;
    unsigned long long _timeToDownloadResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceRequestEventWithType:(id)a0 metrics:(id)a1;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(id)a0 metrics:(id)a1;

@end
