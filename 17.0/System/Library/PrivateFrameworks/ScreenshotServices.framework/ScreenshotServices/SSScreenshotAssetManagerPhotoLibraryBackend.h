@class NSString, PHPhotoLibrary;

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend> {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_gameHighlightsImageDataFromImage:(id)a0 withOptions:(id)a1;
+ (id)_gameHighlightsImageDataFromImageData:(id)a0 withOptions:(id)a1;
+ (id)imageDataFromImage:(id)a0 withProperties:(id)a1;

- (id)photoLibrary;
- (void).cxx_destruct;
- (id)_ARKitImageDataFromImage:(id)a0;
- (void)_registerEntryWithImage:(id)a0 options:(id)a1 retry:(BOOL)a2 identifierHandler:(id /* block */)a3;
- (void)imageForPreviouslyRegisteredIdentifier:(id)a0 imageHandler:(id /* block */)a1;
- (void)registerEntryWithImage:(id)a0 options:(id)a1 identifierHandler:(id /* block */)a2;
- (void)removeEntryWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageToTemporaryLocation:(id)a0 withName:(id)a1 imageDescription:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateImageData:(id)a0 withModificationData:(id)a1 forEntryWithIdentifier:(id)a2 registrationOptions:(id)a3 imageDescription:(id)a4 completionHandler:(id /* block */)a5;

@end
