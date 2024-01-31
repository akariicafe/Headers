@class NSString, NSDictionary, NSError, NSNumber;

@interface IKJSError : IKJSObject <IKJSError> {
    IKJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;
@property (readonly, nonatomic) NSNumber *code;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSString *failureReason;
@property (readonly, nonatomic) NSString *recoverySuggestion;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) IKJSError *underlyingError;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 appContext:(id)a1;

@end
