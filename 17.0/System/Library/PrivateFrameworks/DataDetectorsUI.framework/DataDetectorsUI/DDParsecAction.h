@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}

+ (BOOL)isAvailable;

- (id)localizedName;
- (void).cxx_destruct;
- (int)interactionType;
- (id)createViewController;
- (void)interactionDidFinishAndRequiresDismissal:(BOOL)a0;

@end
