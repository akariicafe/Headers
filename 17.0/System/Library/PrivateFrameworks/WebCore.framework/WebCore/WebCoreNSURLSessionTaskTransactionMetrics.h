@class NSString, NSDate;

@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {
    struct NetworkLoadMetrics { struct MonotonicTime { double m_value; } redirectStart; struct MonotonicTime { double m_value; } fetchStart; struct MonotonicTime { double m_value; } domainLookupStart; struct MonotonicTime { double m_value; } domainLookupEnd; struct MonotonicTime { double m_value; } connectStart; struct MonotonicTime { double m_value; } secureConnectionStart; struct MonotonicTime { double m_value; } connectEnd; struct MonotonicTime { double m_value; } requestStart; struct MonotonicTime { double m_value; } responseStart; struct MonotonicTime { double m_value; } responseEnd; struct MonotonicTime { double m_value; } workerStart; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } protocol; unsigned short redirectCount; unsigned char complete : 1; unsigned char cellular : 1; unsigned char expensive : 1; unsigned char constrained : 1; unsigned char multipath : 1; unsigned char isReusedConnection : 1; unsigned char failsTAOCheck : 1; unsigned char hasCrossOriginRedirect : 1; unsigned char privacyStance; unsigned long long responseBodyBytesReceived; unsigned long long responseBodyDecodedSize; struct RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> { struct AdditionalNetworkLoadMetricsForWebInspector *m_ptr; } additionalNetworkLoadMetricsForWebInspector; } _metrics;
}

@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, getter=isReusedConnection) BOOL reusedConnection;
@property (readonly, getter=isCellular) BOOL cellular;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly, getter=isConstrained) BOOL constrained;
@property (readonly, getter=isMultipath) BOOL multipath;
@property (readonly) int _privacyStance;

- (void)dealloc;
- (BOOL)cellular;
- (id).cxx_construct;
- (BOOL)expensive;
- (BOOL)multipath;
- (void).cxx_destruct;
- (id)networkProtocolName;
- (BOOL)constrained;
- (id)responseEndDate;
- (int)_privacyStance;
- (id)connectEndDate;
- (id)connectStartDate;
- (id)domainLookupEndDate;
- (id)domainLookupStartDate;
- (id)fetchStartDate;
- (id)requestStartDate;
- (id)responseStartDate;
- (id)secureConnectionStartDate;
- (id)_initWithMetrics:(void *)a0;

@end
