@interface ChatKit.AudioMessageWaveform : UIView {
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ currentTime;
    void /* unknown type, empty encoding */ playing;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ audioMediaObject;
    void /* unknown type, empty encoding */ waveform;
    void /* unknown type, empty encoding */ cachedWidth;
}

@property (nonatomic) BOOL opaque;

- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
