@class NSString, SFAudioPlaybackCardSection, UIView;
@protocol SearchUICardSectionViewUpdatable;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>

@property (retain, nonatomic) SFAudioPlaybackCardSection *cardSection;
@property (retain, nonatomic) UIView<SearchUICardSectionViewUpdatable> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void)didEngageCardSection:(id)a0;
- (void)cardEventDidOccur:(unsigned long long)a0 withIdentifier:(id)a1 userInfo:(id)a2;
- (void)_performCommands:(id)a0 applyingUserInfo:(id)a1;

@end
