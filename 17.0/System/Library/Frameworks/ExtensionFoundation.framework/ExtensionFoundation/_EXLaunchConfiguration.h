@class NSArray, NSString, NSDictionary, _EXExtensionIdentity;

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _extensionIdentity;
    void /* unknown type, empty encoding */ preferredLanguages;
    void /* unknown type, empty encoding */ sandboxProfileName;
    void /* unknown type, empty encoding */ additionalEnvironmentVariables;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) void /* unknown type, empty encoding */ instanceIdentifier;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *sandboxProfileName;
@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, copy) void /* unknown type, empty encoding */ launchPersona;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)configureLaunchContext:(id)a0 error:(id *)a1;

- (id)rbsProcessIdentityWithHost:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isLaunchConfigurationEqual:(id)a0;

@end
