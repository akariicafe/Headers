@class NSString;

@interface CoreIDVShared.IdentityProofingImageDimensions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ idFront;
    void /* unknown type, empty encoding */ idBack;
    void /* unknown type, empty encoding */ selfie;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
