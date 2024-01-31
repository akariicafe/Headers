@class NSURLSessionTaskMetrics, NSData;

@interface AMSHTTPArchiveTaskInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly, nonatomic) NSData *HTTPBody;
@property (readonly, nonatomic) NSData *responseData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURLTaskInfo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
