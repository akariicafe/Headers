@interface PaperKit.TextToolListViewController : UIViewController {
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ contentSizeObserver;
    void /* unknown type, empty encoding */ minimumItemHeight;
    void /* unknown type, empty encoding */ minimumPreferredContentSizeWidth;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ autoFillFormListItemVisible;
    void /* unknown type, empty encoding */ addStickerListItemVisible;
    void /* unknown type, empty encoding */ addShapeListItemVisible;
    void /* unknown type, empty encoding */ opacityItemVisible;
    void /* unknown type, empty encoding */ descriptionItemVisible;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listItemViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addTextBoxListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autoFillFormListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addSignatureListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addStickerListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_opacityListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addShapeListItemView;
}

- (void)viewDidLoad;
- (void)updatePreferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)didTapAddShapeListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAddSignatureListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAddStickerListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAddTextBoxListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAutoFillFormListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapDescriptionListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapOpacityListItemView:(id)a0 forEvent:(id)a1;

@end
