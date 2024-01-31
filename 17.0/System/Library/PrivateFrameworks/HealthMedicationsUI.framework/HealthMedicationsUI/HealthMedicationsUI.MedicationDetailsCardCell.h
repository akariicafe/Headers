@interface HealthMedicationsUI.MedicationDetailsCardCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notesLabel;
    void /* unknown type, empty encoding */ pillImageSize;
    void /* unknown type, empty encoding */ separatorToNoteMargin;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillImageConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notesConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyNotesConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionConstraints;
    void /* unknown type, empty encoding */ titleToPillImageConstraints;
    void /* unknown type, empty encoding */ item;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cellTripleTapped:(id)a0;

@end
