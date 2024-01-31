@interface CKSpeakerButton : UIButton

@property (nonatomic) BOOL shouldShowText;
@property (nonatomic) char orientation;
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled;

+ (id)speakerImageWithEnabledState:(BOOL)a0;
+ (id)speakerImageWithOrientation:(char)a0 speakerEnabled:(BOOL)a1 shouldShowText:(BOOL)a2;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)hideSpeakerText;
- (void)touchUpInside:(id)a0;
- (void)updateSpeakerImage;

@end
