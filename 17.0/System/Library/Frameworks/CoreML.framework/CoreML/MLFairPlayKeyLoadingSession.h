@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject

@property (copy) NSString *keyIdentifier;
@property unsigned int sessionID;
@property struct { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned int x0; unsigned int x1; unsigned char x2[136]; unsigned int x3; unsigned char x4[4096]; unsigned char x5[128]; } x3; struct { unsigned char x0[16]; unsigned char x1[16]; unsigned char x2[16]; unsigned char x3[128]; } x4; } *sessionContext;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)generateKeyRequestForKeyIdentifier:(id)a0 teamIdentifier:(id)a1 error:(id *)a2;
- (id)generatePersistentKeyBlobFromKeyResponse:(id)a0 error:(id *)a1;
- (id)transformKeyIdentifier:(id)a0 error:(id *)a1;

@end
