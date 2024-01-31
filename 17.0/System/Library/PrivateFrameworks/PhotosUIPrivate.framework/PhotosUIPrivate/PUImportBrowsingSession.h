@class NSString;
@protocol PUBrowsingSessionImageWellThumbnailProvider;

@interface PUImportBrowsingSession : PUBrowsingSession <PHImportControllerObserver> {
    void /* unknown type, empty encoding */ thumbnailProvider;
}

@property (class, nonatomic, readonly) PUImportBrowsingSession *withDeviceMedia;

@property (nonatomic, readonly) NSString *emptyPlaceholderTitle;
@property (nonatomic, readonly) NSString *emptyPlaceholderSubtitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ importController;
@property (nonatomic, readonly) id<PUBrowsingSessionImageWellThumbnailProvider> imageWellThumbnailProvider;

- (void).cxx_destruct;
- (void)importController:(id)a0 addedImportSource:(id)a1;
- (void)importController:(id)a0 failedToAddImportSource:(id)a1 exceptions:(id)a2;
- (void)importController:(id)a0 removedImportSource:(id)a1;
- (id)initWithDataSourceManager:(id)a0 actionManager:(id)a1 mediaProvider:(id)a2 photosDetailsContext:(id)a3 lowMemoryMode:(BOOL)a4 importStatusManager:(id)a5 privacyController:(id)a6;

@end
