@class NSString;

@interface LAPSPasscodeChangeSystemStubbedAdapter : NSObject <LAPSPasscodeChangeSystem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasPasscode;
- (BOOL)canChangePasscodeWithError:(id *)a0;
- (void)changePasscode:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (id)lastPasscodeChange;
- (id)newPasscodeRequest;
- (id)oldPasscodeRequest;
- (void)verifyNewPasscode:(id)a0 completion:(id /* block */)a1;
- (void)verifyPasscode:(id)a0 completion:(id /* block */)a1;

@end
