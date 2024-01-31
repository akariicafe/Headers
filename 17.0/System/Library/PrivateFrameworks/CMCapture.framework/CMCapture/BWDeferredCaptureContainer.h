@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWDeferredCaptureContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_group> *_flushGroup;
    BOOL _flushBuffersUponCommit;
    BOOL _foldersCreated;
    BOOL _preflushed;
    NSDate *_commitTime;
}

@property (readonly, nonatomic) BOOL committed;
@property (nonatomic) BOOL cached;
@property (nonatomic) unsigned long long cacheExpiryTime;
@property (readonly, nonatomic) long long commitDurationNS;
@property (readonly, nonatomic) long long flushDurationNS;

+ (id)captureRequestIdentifierForManifest:(id)a0;
+ (id)timeForManifest:(id)a0 index:(unsigned long long)a1;

- (int)abort;
- (void)dealloc;
- (int)commit;
- (int)flush;
- (int)commitCaptureSettings:(id)a0 settings:(id)a1;
- (int)commitArray:(id)a0 tag:(id)a1;
- (int)commitBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 captureFrameFlags:(unsigned long long)a3 compressionProfile:(int)a4 metadataTag:(id)a5 portType:(id)a6;
- (int)commitBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 captureFrameFlags:(unsigned long long)a3 compressionProfile:(int)a4 metadataTag:(id)a5 rawThumbnailsBufferTag:(id)a6 rawThumbnailsMetadataTag:(id)a7 mainRawThumbnailBufferTag:(id)a8 mainRawThumbnailMetadataTag:(id)a9 sifrRawThumbnailBufferTag:(id)a10 sifrRawThumbnailMetadataTag:(id)a11 portType:(id)a12;
- (int)commitDictionary:(id)a0 tag:(id)a1;
- (int)commitInference:(id)a0 tag:(id)a1 inferenceAttachmentKey:(id)a2 portType:(id)a3;
- (int)commitInferenceBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 inferenceAttachedMediaKey:(id)a2 compressionProfile:(int)a3 portType:(id)a4;
- (int)commitMetadata:(id)a0 tag:(id)a1 bufferTag:(id)a2;
- (int)commitPhotoDescriptor:(id)a0;
- (id)copyXPCEncoding:(int *)a0;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 flushBuffersUponCommit:(BOOL)a3 err:(int *)a4;
- (int)preflush;
- (int)waitForFlush;

@end
