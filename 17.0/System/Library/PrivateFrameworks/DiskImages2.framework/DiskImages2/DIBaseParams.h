@class NSUUID, DIURL, DiskImageParamsXPC, NSError, DIShadowChain, NSURL;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } backend;
@property (readonly, nonatomic) void *cryptoHeader;
@property (retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC;
@property (readonly, copy, nonatomic) DIURL *inputURL;
@property (readonly, nonatomic) DIShadowChain *shadowChain;
@property (readonly, nonatomic) BOOL RAMdisk;
@property (nonatomic) unsigned long long rawBlockSize;
@property (readonly, nonatomic) BOOL hasUnlockedBackend;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (copy, nonatomic) NSError *deserializationError;
@property (readonly, nonatomic) BOOL requiresRootDaemon;
@property (nonatomic) unsigned long long readPassphraseFlags;
@property (copy, nonatomic) NSURL *shadowURL;

- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)checkBeforeSetWithIsPassphrase:(BOOL)a0 error:(id *)a1;
- (BOOL)openExistingImageWithFlags:(int)a0 error:(id *)a1;
- (BOOL)prepareImageWithXpcHandler:(id)a0 fileMode:(long long)a1 error:(id *)a2;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)tryUnlockUsingKeychainCertificateWithError:(id *)a0;
- (BOOL)validateDeserializationWithError:(id *)a0;

@end
