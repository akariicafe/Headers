@class NSString, SiriUITextTemplateView;
@protocol SiriUITextTemplateModel;

@interface SiriUITextTemplateViewController : SiriUITemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (retain, nonatomic) SiriUITextTemplateView *view;
@property (retain, nonatomic) id<SiriUITextTemplateModel> templateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)_textTemplateViewDisclosed:(id)a0;
- (BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)a0;

@end
