@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)userInfo;
- (id)failureReason;
- (id)code;
- (id)description;
- (void).cxx_destruct;
- (id)domain;
- (id)underlyingError;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
