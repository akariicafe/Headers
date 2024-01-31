@interface DocumentUnderstanding.PosTaggingResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ len;
}

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
