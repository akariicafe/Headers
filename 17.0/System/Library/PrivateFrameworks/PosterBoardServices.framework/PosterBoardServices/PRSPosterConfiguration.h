@class PRSPosterPath, NSString, NSURL;
@protocol BSInvalidatable;

@interface PRSPosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeFromPersistableRepresentation:(id)a0 error:(out id *)a1;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithPath:(id)a0;
- (id)_initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (id)role;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptorIdentifier;
- (id)loadUserInfoWithError:(out id *)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqualToPersistable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)assetDirectory;
- (id)initWithCoder:(id)a0;
- (id)providerBundleIdentifier;
- (id)serverUUID;
- (id)persistableRepresentationWithError:(out id *)a0;

@end
