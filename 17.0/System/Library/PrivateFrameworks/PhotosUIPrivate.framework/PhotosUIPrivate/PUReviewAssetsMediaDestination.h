@class NSMutableDictionary, NSString, NSURL, PUEditableMediaProvider;

@interface PUReviewAssetsMediaDestination : NSObject <PEMediaDestination>

@property (readonly, nonatomic) NSURL *_desiredOutputDirectory;
@property (readonly, nonatomic) PUEditableMediaProvider *_mediaProvider;
@property (readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequestWithIdentifier:(int)a0;
- (void).cxx_destruct;
- (void)_requestDidFinish:(id)a0;
- (id)_saveEditsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_workImageVersionForContentEditingOutput:(id)a0;
- (id)initWithOutputDirectory:(id)a0 mediaProvider:(id)a1;
- (double)progressForRequestWithIdentifier:(int)a0;
- (int)revertEditsForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (int)saveEditsForAsset:(id)a0 usingContentEditingOutput:(id)a1 livePhotoState:(unsigned short)a2 completionHandler:(id /* block */)a3;
- (int)saveInternalEditsForAsset:(id)a0 usingCompositionController:(id)a1 contentEditingOutput:(id)a2 version:(long long)a3 livePhotoState:(unsigned short)a4 completionHandler:(id /* block */)a5;
- (BOOL)supportsProgressForRequestWithIdentifier:(int)a0;

@end
