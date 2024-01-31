@interface NewsFeed.DebugFormatInspectorFrameCell : UITableViewCell {
    void /* unknown type, empty encoding */ displayFrame;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ frameLayer;
    void /* unknown type, empty encoding */ frameLabel;
    void /* unknown type, empty encoding */ zIndexLabel;
    void /* unknown type, empty encoding */ borderLayers;
    void /* unknown type, empty encoding */ hiddenButton;
    void /* unknown type, empty encoding */ leftBorderButton;
    void /* unknown type, empty encoding */ rightBorderButton;
    void /* unknown type, empty encoding */ topBorderButton;
    void /* unknown type, empty encoding */ bottomBorderButton;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didTapBorderButtonWithSender:(id)a0;
- (void)didTapHiddenButtonWithSender:(id)a0;

@end
