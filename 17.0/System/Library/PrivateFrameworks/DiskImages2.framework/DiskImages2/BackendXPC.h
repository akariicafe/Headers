@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {
    struct unique_ptr<crypto::header, std::default_delete<crypto::header>> { struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> { struct header *__value_; } __ptr_; } _cryptoHeader;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct shared_ptr<Backend> { struct Backend *__ptr_; struct __shared_weak_count *__cntrl_; } backend;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (readonly, nonatomic) void *cryptoHeader;

+ (id)newFileBackendWithURL:(id)a0 fileOpenFlags:(int)a1 error:(id *)a2;

- (BOOL)isUnlocked;
- (void)encodeWithCoder:(id)a0;
- (int)lock;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct keys { struct vector<std::byte, std::allocator<std::byte>> { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::allocator<std::byte>> { unsigned char *x0; } x2; } x0; struct vector<std::byte, std::allocator<std::byte>> { unsigned char *x0; unsigned char *x1; struct __compressed_pair<std::byte *, std::allocator<std::byte>> { unsigned char *x0; } x2; } x1; struct unique_ptr<crypto::header, std::default_delete<crypto::header>> { struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> { struct header *x0; } x0; } x2; struct vector<crypto::password_header, std::allocator<crypto::password_header>> { struct password_header *x0; struct password_header *x1; struct __compressed_pair<crypto::password_header *, std::allocator<crypto::password_header>> { struct password_header *x0; } x2; } x3; })generateNewImageKeysWithPassphrase:(const char *)a0 privateKey:(struct __SecKey { } *)a1 pubKeyHeader:(struct public_key_header { struct _publicKeyHash { struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x0; } x0; struct Wrapper<unsigned char[32], std::integral_constant<bool, true>, print_as_buffer<unsigned char[32]>> { unsigned char x0[32]; } x1; } x0; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x0; } x1; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x0; } x2; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x0; } x3; struct _encryptedBlob { struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x0; } x0; struct Wrapper<unsigned char[512], std::integral_constant<bool, true>, print_as_buffer<unsigned char[512]>> { unsigned char x0[512]; } x1; } x4; })a2 header_backend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a3;
- (struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })getCryptoHeaderBackend;
- (BOOL)getPrivateKeyWithHeader:(void *)a0 privateKey:(struct __SecKey **)a1 error:(id *)a2;
- (struct shared_ptr<crypto::format> { struct format *x0; struct __shared_weak_count *x1; })makeCryptoFormatWithIsNewImage:(BOOL)a0 pass:(const char *)a1 certificate:(id)a2 error:(id *)a3;
- (BOOL)newUnlockBackendXPCValidateArgsWithPassphrase:(const char *)a0 certificate:(id)a1 isNewImage:(BOOL)a2 error:(id *)a3;
- (id)newUnlockedBackendXPCWithPassphrase:(const char *)a0 certificate:(id)a1 isNewImage:(BOOL)a2 error:(id *)a3;
- (id)newWithCryptoFormat:(const void *)a0;
- (void)replaceWithBackendXPC:(id)a0;
- (BOOL)tryCreatingCryptoHeader;

@end
