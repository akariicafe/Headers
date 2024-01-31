@class NSString;

@interface CHSExtensionIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ containerBundleIdentifier;
    void /* unknown type, empty encoding */ deviceIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *tokenString;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) BOOL isRemote;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 deviceIdentifier:(id)a2;

@end
