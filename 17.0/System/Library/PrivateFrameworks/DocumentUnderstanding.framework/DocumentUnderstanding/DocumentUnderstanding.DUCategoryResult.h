@class NSString;

@interface DocumentUnderstanding.DUCategoryResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ categoryIdentifier;
}

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ categoryConfidence;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
