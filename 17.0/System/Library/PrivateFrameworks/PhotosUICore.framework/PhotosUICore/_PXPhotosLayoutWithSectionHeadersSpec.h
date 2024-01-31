@class PXPhotosSectionHeaderLayoutSpec;

@interface _PXPhotosLayoutWithSectionHeadersSpec : PXPhotosLayoutSpec {
    PXPhotosSectionHeaderLayoutSpec *_sectionHeaderSpec;
}

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 gridStyle:(long long)a2;
- (void).cxx_destruct;
- (id)sectionHeaderSpec;

@end
