@interface PhotosUIPrivate.StoryExportActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ storyConfiguration;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ destinationURL;
    void /* unknown type, empty encoding */ exportManager;
    void /* unknown type, empty encoding */ iconAsset;
    void /* unknown type, empty encoding */ fullSizePlayerExtendedTraitCollectionSnapshot;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ progressController;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (void)cancel;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)initWithPlaceholderItem:(id)a0;

@end
