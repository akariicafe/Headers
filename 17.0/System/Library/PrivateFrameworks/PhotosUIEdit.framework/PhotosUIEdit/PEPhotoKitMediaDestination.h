@class NSString, NSMutableDictionary;
@protocol PEPhotoKitMediaDestinationDelegate;

@interface PEPhotoKitMediaDestination : NSObject <PEMediaDestination>

@property (readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier;
@property (weak, nonatomic) id<PEPhotoKitMediaDestinationDelegate> delegate;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelRequestWithIdentifier:(int)a0;
- (void).cxx_destruct;
- (void)_requestDidFinish:(id)a0;
- (double)progressForRequestWithIdentifier:(int)a0;
- (int)revertEditsForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (int)saveEditsForAsset:(id)a0 usingContentEditingOutput:(id)a1 livePhotoState:(unsigned short)a2 completionHandler:(id /* block */)a3;
- (int)saveInternalEditsForAsset:(id)a0 usingCompositionController:(id)a1 contentEditingOutput:(id)a2 version:(long long)a3 livePhotoState:(unsigned short)a4 completionHandler:(id /* block */)a5;
- (BOOL)supportsProgressForRequestWithIdentifier:(int)a0;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)a0 photoLibrary:(id)a1;
- (id)_saveEditsForPhoto:(id)a0 saveRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
