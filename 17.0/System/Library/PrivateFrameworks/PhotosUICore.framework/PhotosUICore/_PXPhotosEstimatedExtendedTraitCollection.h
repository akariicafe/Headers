@interface _PXPhotosEstimatedExtendedTraitCollection : PXExtendedTraitCollection {
    long long _layoutSizeClass;
    long long _layoutOrientation;
    long long _userInterfaceIdiom;
    struct CGSize { double width; double height; } _layoutReferenceSize;
}

- (long long)userInterfaceIdiom;
- (struct CGSize { double x0; double x1; })layoutReferenceSize;
- (long long)layoutOrientation;
- (long long)layoutSizeClass;
- (id)initWithViewController:(id)a0;

@end
