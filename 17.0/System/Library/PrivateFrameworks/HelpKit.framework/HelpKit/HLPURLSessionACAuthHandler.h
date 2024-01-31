@class HLPURLSessionACAuthContext, NSString, PPCExtensibleSSOAuthenticator, NSObject;
@protocol OS_dispatch_queue;

@interface HLPURLSessionACAuthHandler : NSObject <HLPURLSessionCustomAuthHandling>

@property (copy, nonatomic) HLPURLSessionACAuthContext *authContext;
@property (retain, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, copy, nonatomic) HLPURLSessionACAuthContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAuthenticateWithURLResponse:(id)a0;

@end
