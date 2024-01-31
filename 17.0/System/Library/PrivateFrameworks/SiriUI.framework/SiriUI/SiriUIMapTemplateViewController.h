@class NSString, SiriUIMapTemplateView;
@protocol SiriUIMapTemplateViewControllerDelegate, SiriUIMapTemplateModel;

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>

@property (retain, nonatomic) SiriUIMapTemplateView *view;
@property (retain, nonatomic) id<SiriUIMapTemplateModel> templateModel;
@property (weak, nonatomic) id<SiriUIMapTemplateViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)prepareForDismissal;
- (void)mapTemplateView:(id)a0 didModifyPlacemark:(id)a1;
- (void)mapTemplateViewDidSelectMap:(id)a0;
- (Class)templateViewClass;

@end
