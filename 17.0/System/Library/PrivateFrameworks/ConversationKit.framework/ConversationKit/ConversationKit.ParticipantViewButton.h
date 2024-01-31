@interface ConversationKit.ParticipantViewButton : UIControl {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ discView;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ colorConfiguration;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
