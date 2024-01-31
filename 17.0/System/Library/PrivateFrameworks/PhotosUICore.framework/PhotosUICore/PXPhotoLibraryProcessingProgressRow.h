@class PHPhotoLibrary;

@interface PXPhotoLibraryProcessingProgressRow : PTButtonRow

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)tableViewCellClass;
- (id)defaultUIAction;
- (id)initWithPhotoLibrary:(id)a0 titleKeyPath:(id)a1 imageKeyPath:(id)a2;

@end
