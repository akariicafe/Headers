@class NSString, NSArray, _TtC21DocumentUnderstanding13DUTopicResult, DUGlobalTopicSetIdentifierObjC;

@interface DUTopicResultObjC : NSObject {
    _TtC21DocumentUnderstanding13DUTopicResult *_underlying;
}

@property (copy, nonatomic) DUGlobalTopicSetIdentifierObjC *topicSet;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (nonatomic) double topicConfidence;
@property (copy, nonatomic) NSArray *topicNames;

- (id)init;
- (void).cxx_destruct;

@end
