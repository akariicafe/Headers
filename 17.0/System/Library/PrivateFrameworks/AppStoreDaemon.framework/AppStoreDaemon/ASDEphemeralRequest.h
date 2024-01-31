@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest {
    id /* block */ _completionHandler;
}

@property (readonly, copy, nonatomic) ASDRequestOptions *options;

+ (BOOL)supportsSecureCoding;
+ (long long)requestType;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)receiveResponse:(id)a0;

@end
