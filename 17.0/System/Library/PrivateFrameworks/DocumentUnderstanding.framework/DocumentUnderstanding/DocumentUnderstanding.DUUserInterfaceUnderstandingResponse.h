@class NSArray;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ foundEntities;
}

@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
