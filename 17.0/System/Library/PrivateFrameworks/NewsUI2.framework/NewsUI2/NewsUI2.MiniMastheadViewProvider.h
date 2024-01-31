@interface NewsUI2.MiniMastheadViewProvider : NSObject <NUTitleViewStyler, NUFeedTitleViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ compactMiniMastheadView;
    void /* unknown type, empty encoding */ regularMiniMastheadView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_regularContainerTitleView;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ refreshStateMachine;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
}

- (void)feedTitleViewDidTapOnTitleView:(id)a0;
- (id)styleTitleText:(id)a0 styleType:(unsigned long long)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (void).cxx_destruct;

@end
