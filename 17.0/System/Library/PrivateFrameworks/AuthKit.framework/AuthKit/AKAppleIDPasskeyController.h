@class NSString, AAFXPCSession;

@interface AKAppleIDPasskeyController : NSObject <AAFXPCSessionDelegate>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)appleIDPasskeyStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithXPCSession:(id)a0;
- (void)remoteServiceDidInterrupt;
- (void)remoteServiceDidInvalidate;
- (void)setupAppleIDPasskeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)unenrollAppleIDPasskeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyAppleIDPasskeyWithContext:(id)a0 completion:(id /* block */)a1;

@end
