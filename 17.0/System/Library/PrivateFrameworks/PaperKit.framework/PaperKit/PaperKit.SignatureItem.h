@interface PaperKit.SignatureItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ uniqueID;
    void /* unknown type, empty encoding */ baselineOffset;
    void /* unknown type, empty encoding */ creationDate;
    void /* unknown type, empty encoding */ shouldPersist;
    void /* unknown type, empty encoding */ signatureDescription;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ drawing;
    void /* unknown type, empty encoding */ isOwned;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
