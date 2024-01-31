@class NSString, UIImage, PXRegionOfInterest, NSSet, PHQuestion, PXGadgetSpec, PXSurveyQuestionsGadgetContentView, PXSurveyQuestionConfigurationHandlers;
@protocol PXSurveyQuestionConfiguration, PXGadgetDelegate;

@interface PXSurveyQuestionGadget : NSObject <PXGadget, PXSurveyQuestionsGadgetContentViewDelegate> {
    long long _configurationRequestId;
    NSString *_currentAnswerReason;
}

@property (class, readonly, nonatomic) unsigned int confirmYesSoundID;

@property (retain, nonatomic) PXSurveyQuestionsGadgetContentView *contentView;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly, nonatomic) PHQuestion *question;
@property (readonly, nonatomic) id<PXSurveyQuestionConfiguration> configuration;
@property (nonatomic) unsigned long long answer;
@property (retain, nonatomic) NSSet *assetUUIDsAssociatedWithGadget;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL currentlyInOneUp;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkQueue;
+ (void)preloadResources;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned short)questionType;
- (void)_updateContentViewConfiguration;
- (void)_didFinishUpdatingSurveyQuestionStateFromAnswer;
- (void)_playConfirmYesSound;
- (void)_updateSurveyQuestionStateFromAnswer:(unsigned long long)a0 andReason:(id)a1;
- (id)additionalReasonsForWallpaperQuestionsForAnswer:(unsigned long long)a0;
- (id)gadgetContentView:(id)a0 additionalReasonMessageForAnswer:(unsigned long long)a1;
- (id)gadgetContentView:(id)a0 additionalReasonTitleForAnswer:(unsigned long long)a1;
- (id)gadgetContentView:(id)a0 additionalReasonsForAnswer:(unsigned long long)a1;
- (void)gadgetContentView:(id)a0 didAnswer:(unsigned long long)a1 withReason:(id)a2;
- (id)initWithSurveyQuestion:(id)a0 gadgetType:(unsigned long long)a1;
- (void)prepareCollectionViewItem:(id)a0;
- (void)refreshQuestionContentView;
- (void)removeCollectionViewItem:(id)a0;
- (id)uniqueGadgetIdentifier;

@end
