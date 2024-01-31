@class NSString, NSDictionary, NSData, NSURL, GEOApplicationAuditToken, GEODataRequestThrottlerToken;
@protocol GEORequestCounterTicket;

@interface GEODataRequest : NSObject {
    unsigned long long _options;
}

@property (copy, nonatomic) NSData *cachedData;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, copy, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) NSDictionary *additionalHTTPHeaders;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) struct { int type; union { int raw; int tile; int placeRequest; } subtype; } kind;
@property (readonly, nonatomic) id<GEORequestCounterTicket> requestCounterTicket;
@property (readonly, nonatomic) unsigned long long multipathServiceType;
@property (readonly, nonatomic) unsigned long long multipathAlternatePort;
@property (readonly, nonatomic) NSString *backgroundSessionIdentifier;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (readonly, nonatomic) BOOL useHTTPPost;
@property (readonly, nonatomic) BOOL allowTLSSessionTicketUse;
@property (readonly, nonatomic) BOOL needsProxy;
@property (readonly, nonatomic) BOOL requireInexpensiveNetwork;
@property (readonly, nonatomic) BOOL disallowCellularNetwork;
@property (readonly, nonatomic) BOOL requirePluggedIn;
@property (readonly, nonatomic) BOOL requireUnconstrainedNetwork;

- (id)initWithKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 URL:(id)a1 auditToken:(id)a2 timeoutInterval:(double)a3 additionalHTTPHeaders:(id)a4 bodyData:(id)a5 userAgent:(id)a6 entityTag:(id)a7 cachedData:(id)a8 requestCounterTicket:(id)a9 multipathServiceType:(unsigned long long)a10 multipathAlternatePort:(unsigned long long)a11 backgroundSessionIdentifier:(id)a12 throttleToken:(id)a13 options:(unsigned long long)a14;
- (id)init;
- (id)newURLRequest;
- (id)initForAnalyticsUploadRequest:(id)a0 toURL:(id)a1 requiresProxy:(BOOL)a2 backgroundIdentifier:(id)a3 compressRequest:(BOOL)a4 allowCellular:(BOOL)a5 allowBattery:(BOOL)a6 timeToLive:(double)a7 requestCounterTicket:(id)a8 throttleToken:(id)a9;
- (id)initWithKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 protobufRequest:(id)a1 URL:(id)a2 additionalHTTPHeaders:(id)a3 auditToken:(id)a4 timeoutInterval:(double)a5 traits:(id)a6 requestCounterTicket:(id)a7 multipathServiceType:(unsigned long long)a8 multipathAlternatePort:(unsigned long long)a9 throttleToken:(id)a10 options:(unsigned long long)a11;
- (id)publicLogDescription;
- (id)description;
- (id)updatedRequestWithNewProtobufRequest:(id)a0;
- (void).cxx_destruct;
- (id)updatedRequestWithNewBodyData:(id)a0;
- (id)initWithKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 URL:(id)a1 auditToken:(id)a2 timeoutInterval:(double)a3 additionalHTTPHeaders:(id)a4 bodyData:(id)a5 userAgent:(id)a6 entityTag:(id)a7 cachedData:(id)a8 requestCounterTicket:(id)a9 multipathServiceType:(unsigned long long)a10 multipathAlternatePort:(unsigned long long)a11 throttleToken:(id)a12 options:(unsigned long long)a13;

@end
