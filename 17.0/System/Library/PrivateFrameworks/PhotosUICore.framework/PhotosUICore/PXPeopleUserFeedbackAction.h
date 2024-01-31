@class NSDictionary, PHUserFeedback;
@protocol PXFastEnumeration;

@interface PXPeopleUserFeedbackAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (copy, nonatomic) NSDictionary *undoUserFeedbacks;

- (id)collections;
- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithPeople:(id)a0 feedbackType:(unsigned long long)a1;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
