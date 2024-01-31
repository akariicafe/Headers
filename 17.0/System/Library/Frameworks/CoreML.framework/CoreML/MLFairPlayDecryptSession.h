@class NSString, NSObject, NSXPCConnection;
@protocol CoreMLModelSecurityProtocol;

@interface MLFairPlayDecryptSession : NSObject

@property (copy, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *xpcProxy;

+ (id)decryptSessionForModelAtPath:(id)a0 usesCodeSigningIdentityForEncryption:(BOOL)a1 keyBlob:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;

@end
