@class NSArray;

@interface DocumentUnderstanding.DUTopicDetectionResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ globalTopics;
    void /* unknown type, empty encoding */ personalTopics;
}

@property (nonatomic, copy) NSArray *globalTopics;
@property (nonatomic, copy) NSArray *personalTopics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
