@class NSString;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ topicIdentifier;
}

@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ topicConfidence;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
