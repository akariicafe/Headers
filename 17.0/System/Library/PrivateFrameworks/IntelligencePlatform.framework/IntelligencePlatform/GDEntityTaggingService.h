@class GDEntityTaggingServiceInner;

@interface GDEntityTaggingService : NSObject {
    GDEntityTaggingServiceInner *inner;
}

- (void).cxx_destruct;
- (id)entitiesForTag:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)entityTagsForIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)recordDirectFeedbackWithGradedTrue:(id)a0 gradedFalse:(id)a1 ignored:(id)a2 neverPresented:(id)a3 error:(id *)a4;
- (void)recordStatefulFeedback:(id)a0 error:(id *)a1;

@end
