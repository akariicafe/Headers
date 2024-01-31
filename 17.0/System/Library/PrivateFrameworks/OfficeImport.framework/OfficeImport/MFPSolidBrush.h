@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (id)color;
- (void)fillPath:(id)a0;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;

@end
