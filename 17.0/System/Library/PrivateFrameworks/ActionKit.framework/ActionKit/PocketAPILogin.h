@class PocketAPI, NSString, NSOperationQueue;
@protocol PocketAPIDelegate;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {
    NSOperationQueue *operationQueue;
    id<PocketAPIDelegate> delegate;
    BOOL didStart;
    BOOL didFinish;
    BOOL reverseAuth;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) PocketAPI *API;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *requestToken;
@property (readonly, retain, nonatomic) NSString *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redirectURL;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fetchRequestToken;
- (void)pocketAPI:(id)a0 receivedRequestToken:(id)a1;
- (void)loginDidFinish:(BOOL)a0;
- (void)_setRequestToken:(id)a0;
- (void)_setReverseAuth:(BOOL)a0;
- (void)convertRequestTokenToAccessToken;
- (id)initWithAPI:(id)a0 delegate:(id)a1;
- (void)loginDidStart;
- (void)pocketAPI:(id)a0 hadLoginError:(id)a1;
- (void)pocketAPILoggedIn:(id)a0;

@end
