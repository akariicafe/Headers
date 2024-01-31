@class NSString, NSArray;

@interface DocumentUnderstanding.DUTopicResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ topicIdentifier;
    void /* unknown type, empty encoding */ topicNames;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ topicSet;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ topicConfidence;
@property (nonatomic, copy) NSArray *topicNames;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
