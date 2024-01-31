@class NSString, NSDictionary, NSURL, NSError, NSDateInterval;

@interface FCNetworkEvent : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *requestUUID;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, copy, nonatomic) NSString *responseMIMEType;
@property (readonly, nonatomic) unsigned long long HTTPStatusCode;
@property (readonly, copy, nonatomic) NSString *HTTPMethod;
@property (readonly, copy, nonatomic) NSDictionary *HTTPResponseHeaders;
@property (readonly, copy, nonatomic) NSString *containerName;
@property (readonly, nonatomic) BOOL isProxyConnection;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double dnsDuration;
@property (readonly, nonatomic) double connectDuration;
@property (readonly, nonatomic) double requestDuration;
@property (readonly, nonatomic) double responseDuration;
@property (readonly, nonatomic) unsigned long long requestSize;
@property (readonly, nonatomic) unsigned long long responseSize;

- (id)initWithType:(int)a0 URLRequest:(id)a1 operationID:(id)a2 requestUUID:(id)a3 startTime:(double)a4 HTTPResponse:(id)a5 metrics:(id)a6 containerName:(id)a7 error:(id)a8;
- (id)initWithType:(int)a0 ckRequestInfo:(id)a1 operationID:(id)a2 startTime:(double)a3 containerName:(id)a4 error:(id)a5;
- (id)initWithType:(int)a0 rcNetworkEvent:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithType:(int)a0 URL:(id)a1 operationID:(id)a2 requestUUID:(id)a3 responseMIMEType:(id)a4 HTTPStatusCode:(unsigned long long)a5 HTTPMethod:(id)a6 HTTPResponseHeaders:(id)a7 containerName:(id)a8 isProxyConnection:(BOOL)a9 error:(id)a10 startTime:(double)a11 dnsDuration:(double)a12 connectDuration:(double)a13 requestDuration:(double)a14 responseDuration:(double)a15 requestSize:(double)a16 responseSize:(double)a17;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
