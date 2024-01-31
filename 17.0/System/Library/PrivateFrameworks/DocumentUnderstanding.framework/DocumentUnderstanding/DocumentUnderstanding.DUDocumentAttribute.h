@interface DocumentUnderstanding.DUDocumentAttribute : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ attributeNamespace;
    void /* unknown type, empty encoding */ attributeType;
    void /* unknown type, empty encoding */ attributeID;
    void /* unknown type, empty encoding */ displayName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
