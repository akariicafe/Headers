@class NSString, NSHTTPURLResponse, NSData, NSURL, NSURLRequest;

@interface CKDTrafficLogger : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ accumulatedLogs;
    void /* unknown type, empty encoding */ accumulatedLogSize;
    void /* unknown type, empty encoding */ accumulatedCompletedLogCount;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ delayedFlushTask;
}

@property (class, nonatomic, readonly) CKDTrafficLogger *shared;

- (void)logResponseConfigurationWithRequestUUID:(NSString *)a0 format:(long long)a1 messageClass:(NSString *)a2 completionHandler:(void (^)(void))a3;
- (void)logPartialRequestObjectDataWithRequestUUID:(NSString *)a0 objectData:(NSData *)a1 completionHandler:(void (^)(void))a2;
- (void)logPartialResponseObjectDataWithRequestUUID:(NSString *)a0 objectData:(NSData *)a1 completionHandler:(void (^)(void))a2;
- (void)logRequestBodyStreamResetWithRequestUUID:(NSString *)a0 completionHandler:(void (^)(void))a1;
- (void)logResponseWithRequestUUID:(NSString *)a0 response:(NSHTTPURLResponse *)a1 completionHandler:(void (^)(void))a2;
- (void)finishRequestLogWithRequestUUID:(NSString *)a0 completionHandler:(void (^)(void))a1;
- (void)logRequestWithRequestUUID:(NSString *)a0 request:(NSURLRequest *)a1 url:(NSURL *)a2 method:(NSString *)a3 messageClass:(NSString *)a4 parsingStandaloneMessage:(BOOL)a5 completionHandler:(void (^)(void))a6;
- (id)init;

@end
