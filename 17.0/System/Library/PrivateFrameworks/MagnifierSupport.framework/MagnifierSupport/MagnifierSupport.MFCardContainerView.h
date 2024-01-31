@interface MagnifierSupport.MFCardContainerView : MagnifierSupport.MFPassthroughView <UITextDragDelegate> {
    void /* unknown type, empty encoding */ card;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ draggableView;
    void /* unknown type, empty encoding */ grabberView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backgroundBlur;
    void /* unknown type, empty encoding */ internalDraggableView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ backdropView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateAppearanceForReduceTransparency:(id)a0;

@end
