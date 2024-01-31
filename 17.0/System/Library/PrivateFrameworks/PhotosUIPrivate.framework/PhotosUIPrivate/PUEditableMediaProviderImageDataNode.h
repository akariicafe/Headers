@class NSArray, NSString, NSData, NSURL, PUEditableMediaProvider;
@protocol PXRunNodeDelegate, PUEditableAsset;

@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode> {
    int _requestID;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *imageDataURL;
@property (readonly, nonatomic) NSString *imageDataUTI;
@property (readonly, nonatomic) BOOL useEmbeddedPreview;
@property (readonly, nonatomic) long long imageExifOrientation;

- (void)run;
- (void)didCancel;
- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)a0 imageUTI:(id)a1 imageOrientation:(long long)a2 info:(id)a3;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 version:(long long)a2;

@end
