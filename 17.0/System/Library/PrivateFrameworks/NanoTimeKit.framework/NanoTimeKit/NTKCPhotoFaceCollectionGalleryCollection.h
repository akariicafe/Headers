@class NSString, CLKDevice;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    CLKDevice *_device;
    NSString *_albumName;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)newFace;
- (id)initForDevice:(id)a0;
- (void)photoAlbumChanged;

@end
