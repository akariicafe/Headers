@class GDPersonEntityTagDirectFeedbackSet, GDPersonEntityTaggingOptionsInner, NSString, GDScoreRankedPersonEntityTagsInner, NSError, GDScoreRankedEntityTagPersonsInner, GDPersonEntityTaggingStatefulFeedback;

@interface GDEntityTaggingServiceInner : NSObject {
    void /* unknown type, empty encoding */ entityTaggingService;
    void /* unknown type, empty encoding */ feedbackService;
}

+ (long long)gdTagTypeWithName:(id)a0;
+ (id)tagNameWithGdTag:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)entitiesForTagWithGdEntityTagType:(long long)a0 options:(GDPersonEntityTaggingOptionsInner *)a1 completionHandler:(void (^)(GDScoreRankedEntityTagPersonsInner *, NSError *))a2;
- (id)initWithEtConfig:(id)a0 error:(id *)a1;
- (void)personEntityTagsFor:(NSString *)a0 options:(GDPersonEntityTaggingOptionsInner *)a1 completionHandler:(void (^)(GDScoreRankedPersonEntityTagsInner *, NSError *))a2;
- (void)recordDirectFeedbackWithGradedTrue:(GDPersonEntityTagDirectFeedbackSet *)a0 gradedFalse:(GDPersonEntityTagDirectFeedbackSet *)a1 ignored:(GDPersonEntityTagDirectFeedbackSet *)a2 neverPresented:(GDPersonEntityTagDirectFeedbackSet *)a3 error:(void (^)(NSError *))a4;
- (void)recordStatefulFeedbackWithFeedback:(GDPersonEntityTaggingStatefulFeedback *)a0 error:(void (^)(NSError *))a1;

@end
