@class NSString, NSData;

@interface MKSRPServer : NSObject {
    struct srp_st { int x0; int x1; struct cstr_st *x2; void *x3; void *x4; struct cstr_st *x5; void *x6; void *x7; void *x8; void *x9; void *x10; void *x11; struct cstr_st *x12; struct srp_meth_st *x13; void *x14; void *x15; void *x16; void /* function */ *x17; struct srp_server_lu_st *x18; } *_session;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSData *salt;
@property (retain, nonatomic) NSData *pubkey;
@property (retain, nonatomic) NSData *sharedKey;
@property (retain, nonatomic) NSData *proofOfMatch;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (void).cxx_destruct;
- (id)initWithPassword:(id)a0;
- (id)generateSharedKey:(id)a0 proofOfMatch:(id)a1;
- (void)_generateSalt:(id *)a0 pubkey:(id *)a1;
- (id)_generateSharedKey:(id)a0 proofOfMatch:(id)a1;
- (void)cleanupSRP;
- (id)generateRandomPassword;
- (void)generateSalt:(id *)a0 pubkey:(id *)a1;

@end
