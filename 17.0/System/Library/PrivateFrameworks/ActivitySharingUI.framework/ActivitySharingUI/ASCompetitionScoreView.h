@class UIImageView, ASCompetitionScoreViewConfiguration, UILabel, ASCompetitionParticipantScoreView;

@interface ASCompetitionScoreView : UIView {
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    BOOL _isRTLLayout;
}

@property (readonly, nonatomic) double lastBaselineY;

+ (double)preferredHeightForConfiguration:(id)a0 friend:(id)a1;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForWidth:(double)a0;
- (double)participantScoreViewWidthForParticipant:(long long)a0 maximumWidth:(double)a1;
- (void)setFriend:(id)a0 competition:(id)a1;

@end
