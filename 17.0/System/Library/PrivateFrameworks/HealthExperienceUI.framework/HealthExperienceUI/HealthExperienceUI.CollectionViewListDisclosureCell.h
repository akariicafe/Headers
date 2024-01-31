@class NSString;

@interface HealthExperienceUI.CollectionViewListDisclosureCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailTextLabel;
    void /* unknown type, empty encoding */ showDisclosureIndicator;
    void /* unknown type, empty encoding */ currentLayoutConstraints;
    void /* unknown type, empty encoding */ forceVerticalLayout;
    void /* unknown type, empty encoding */ detailTextObservation;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
