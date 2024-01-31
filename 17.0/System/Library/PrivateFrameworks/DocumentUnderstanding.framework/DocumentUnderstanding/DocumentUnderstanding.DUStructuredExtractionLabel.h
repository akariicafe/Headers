@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ labelName;
}

@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) void /* unknown type, empty encoding */ confidenceScore;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
