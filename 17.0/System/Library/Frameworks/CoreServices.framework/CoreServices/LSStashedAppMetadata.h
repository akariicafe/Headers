@class NSString, NSDate;

@interface LSStashedAppMetadata : NSObject <NSSecureCoding> {
    unsigned char _validationState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *exactBundleVersion;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSDate *dateStashed;
@property (readonly) NSDate *dateOriginallyInstalled;
@property (readonly) NSString *signerOrganization;
@property (readonly, getter=isProfileValidated) BOOL profileValidated;
@property (readonly, getter=isUPPValidated) BOOL UPPValidated;
@property (readonly, getter=isFreeProfileValidated) BOOL freeProfileValidated;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1;

@end
