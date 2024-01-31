@class PRSServerPosterIdentity, NSString, BSAuditToken, NSURL, NSHashTable, NSDictionary, ATXPosterDescriptorGalleryOptions;

@interface PRSPosterPath : NSObject <BSInvalidatable, BSXPCSecureCoding, NSSecureCoding> {
    NSHashTable *_lock_allExtensions;
    NSURL *_sandboxExtensionURL;
    BSAuditToken *_sandboxExtensionAuditToken;
    long long _lock_sandboxExtensionHandle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _options;
    unsigned char _lock_validityExtensions;
    unsigned char _lock_validityExtensionsHigh;
    BOOL _lock_invalidated;
    BOOL _lock_purged;
    NSDictionary *_userInfo;
    ATXPosterDescriptorGalleryOptions *_galleryOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRSServerPosterIdentity *serverIdentity;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSURL *contentsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (void)_setDisableUniquing:(BOOL)a0;
+ (id)debugDescription;
+ (id)temporaryDescriptorPathWithIdentifier:(id)a0 role:(id)a1;
+ (id)temporaryPathForRole:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)invalidate;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)loadGalleryOptionsWithError:(out id *)a0;
- (BOOL)isServerPosterPath;
- (BOOL)copyContentsOfPath:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (id)containerURL;
- (id)initWithCoder:(id)a0;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (BOOL)ensureContentsURLIsReachableAndReturnError:(out id *)a0;
- (id)extendValidityForReason:(id)a0;
- (long long)compareDescriptorIdentifiers:(id)a0;

@end
