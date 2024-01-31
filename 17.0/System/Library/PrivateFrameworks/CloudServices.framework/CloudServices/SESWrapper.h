@class NSString, NSDictionary, NSData, NSDate;

@interface SESWrapper : NSObject

@property (nonatomic) int reqVersion;
@property (readonly, nonatomic) struct ckvr_srp_context { struct ccrng_state *x0; struct ccdigest_info *x1; struct ccmode_cbc *x2; struct ccmode_cbc *x3; struct ccmode_gcm *x4; struct ccmode_gcm *x5; struct ccsrp_ctx *x6; } *ckvr;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recoveryPassphrase;
@property (nonatomic) BOOL recoveryPassphraseMutable;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *decodedLabel;
@property (copy, nonatomic) NSDate *escrowDate;
@property (retain, nonatomic) NSData *escrowBlob;
@property (retain) NSData *recoveryBlob;

- (void)dealloc;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)decodedEscrowRecordFromData:(id)a0 stingray:(BOOL)a1 env:(id)a2 duplicate:(BOOL)a3;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;
- (id)initWithDSID:(id)a0 escrowRecordContents:(id)a1 recoveryPassphrase:(id)a2 recordID:(id)a3 recordLabel:(id)a4;
- (id)initWithDSID:(id)a0 escrowRecordContents:(id)a1 recoveryPassphrase:(id)a2 recordID:(id)a3 recordLabel:(id)a4 reqVersion:(int)a5;
- (id)initWithRequest:(id)a0 reqVersion:(int)a1;
- (id)recoveryResponseForBlob:(id)a0;
- (id)srpInitBlob;
- (unsigned long long)srpKeySize;
- (unsigned long long)srpPublicKeySize;
- (id)srpRecoveryBlobFromData:(id)a0 error:(id *)a1;
- (void)srpRecoveryUpdateDSID:(id)a0 recoveryPassphrase:(id)a1;
- (id)srpResponseForEscrowBlob:(id)a0 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 withFullCCKey:(struct ccrsa_full_ctx { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a2;

@end
