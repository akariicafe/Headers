@class LPLinkMetadata, NSString, LPFileMetadata, NSURL, LPImage, NSObject;
@protocol OS_dispatch_group;

@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate> {
    BOOL _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    LPImage *_smallQuickLookThumbnail;
    NSString *_MIMEType;
    NSString *_UTI;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)specialization;
+ (id)_thumbnailQueue;
+ (id)specializedMetadataProviderForResourceWithContext:(id)a0;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)complete;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)cleanUpTemporaryFile;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)a0;
- (void)fetchMetadataForReachableFile:(id)a0;
- (void)fetchMetadataFromURL:(id)a0;
- (void)generateFallbackMetadataForUnreachableFile:(id)a0;
- (void)metadataProviderSpecialization:(id)a0 didCompleteWithMetadata:(id)a1;
- (void)metadataProviderSpecializationDidFail:(id)a0;
- (void)requestQuickLookThumbnailForURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 badgeType:(unsigned long long)a2 image:(id *)a3;
- (BOOL)shouldUseQuickLookForFileType;
- (void)updatePreliminaryMetadata;

@end
