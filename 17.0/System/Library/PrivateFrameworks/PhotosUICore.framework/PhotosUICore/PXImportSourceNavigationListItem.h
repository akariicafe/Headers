@class PHPhotoLibrary, UIImage, PHImportSource;

@interface PXImportSourceNavigationListItem : PXNavigationListItem

@property (readonly, nonatomic) PHImportSource *importSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) UIImage *image;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRemovable;
- (id)representedObject;
- (id)accessoryGlyphImageName;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2;
- (id)initWithImportSource:(id)a0 photoLibrary:(id)a1;

@end
