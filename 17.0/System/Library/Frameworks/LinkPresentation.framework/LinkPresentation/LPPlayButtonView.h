@class LPPlayButtonControl, LPAudioPlayButtonStyle, LPInlineMediaPlaybackInformation;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable, LPComponentMediaPlayable> {
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPAudioPlayButtonStyle *_style;
    BOOL _hasBuilt;
}

- (id)theme;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)playable;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)updateButton;
- (void)buildSubviewsIfNeeded;
- (id)initWithHost:(id)a0 playbackInformation:(id)a1 style:(id)a2;
- (void)installAudioButton;
- (void)installDisablediTunesButton;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installiTunesButton;
- (BOOL)isLyricStyle;
- (void)layoutComponentView;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;

@end
