@class NSString;

@interface AMSAbsintheSession : NSObject

@property (class, readonly, nonatomic) AMSAbsintheSession *defaultSession;

@property (nonatomic) struct PSCSessionInternal_ { } *sessionRef;
@property (retain, nonatomic) NSString *servKey;
@property (nonatomic) void /* function */ *PSCHelloV4Override;

- (id)init;
- (void).cxx_destruct;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)_prepareContextWithBag:(id)a0 error:(id *)a1;
- (BOOL)clearSession;
- (BOOL)verifyData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
