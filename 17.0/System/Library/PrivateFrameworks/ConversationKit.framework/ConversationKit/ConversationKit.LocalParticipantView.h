@interface ConversationKit.LocalParticipantView : UIView {
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ countdownLabel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dragEnabled;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ requiresControlsHidden;
    void /* unknown type, empty encoding */ requiresViewHidden;
    void /* unknown type, empty encoding */ controlsHiddenByViewModel;
    void /* unknown type, empty encoding */ isInRoster;
    void /* unknown type, empty encoding */ _videoMessagingState;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ controlsView;

- (void)updateCountdownWith:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
