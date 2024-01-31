@class DULanguageTaggingResponseObjC, DUCategoryClassificationResponseObjC, DUFoundInEventResultObjC, DUTopicDetectionResponseObjC, DUDebugInfoObjC, _TtC21DocumentUnderstanding10DUResponse, DUStructuredEntityResponseObjC;

@interface DUResponseObjC : NSObject {
    _TtC21DocumentUnderstanding10DUResponse *_underlying;
}

@property (copy, nonatomic) DUTopicDetectionResponseObjC *topics;
@property (copy, nonatomic) DUStructuredEntityResponseObjC *structuredEntities;
@property (copy, nonatomic) DULanguageTaggingResponseObjC *languageTags;
@property (copy, nonatomic) DUCategoryClassificationResponseObjC *documentCategories;
@property (copy, nonatomic) DUFoundInEventResultObjC *foundInEvent;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;

- (id)init;
- (void).cxx_destruct;

@end
