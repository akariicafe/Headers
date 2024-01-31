@class NSString;

@interface DocumentUnderstanding.DUDebugInfo : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ debugString;
}

@property (nonatomic, copy) NSString *debugString;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
