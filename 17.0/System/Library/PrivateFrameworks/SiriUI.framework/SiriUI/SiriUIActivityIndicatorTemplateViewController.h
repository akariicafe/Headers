@class SiriUIActivityIndicatorTemplateView;
@protocol SiriUIActivityIndicatorTemplateModel;

@interface SiriUIActivityIndicatorTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUIActivityIndicatorTemplateView *view;
@property (retain, nonatomic) id<SiriUIActivityIndicatorTemplateModel> templateModel;

- (void)loadView;

@end
