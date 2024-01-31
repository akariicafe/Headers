@class PXPeopleScalableAvatarView, NSString, UIImage, UIView, PXSurveyQuestionConfigurationHandlers, PHPerson;

@interface PXSurveyQuestionPersonConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PXPeopleScalableAvatarView *_avatarView;
}

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (nonatomic) BOOL isStale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 person:(id)a1;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needsQuestionInvalidationForChange:(id)a0;

@end
