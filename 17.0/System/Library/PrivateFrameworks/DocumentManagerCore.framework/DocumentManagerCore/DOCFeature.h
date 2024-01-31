@class DOCFeatureState;

@interface DOCFeature : NSObject

@property (class, readonly) DOCFeatureState *useBlastDoorThumbnails;
@property (class, readonly) DOCFeatureState *quickLookInWindow;
@property (class, readonly) DOCFeatureState *quickLookRestrictContentTypesThatOpenInWindow;
@property (class, readonly) DOCFeatureState *quickLookInWindowShared;
@property (class, readonly) DOCFeatureState *quickLookAllDocumentsInFiles;
@property (class, readonly) DOCFeatureState *quickLookEntireFolderInWindow;
@property (class, readonly) DOCFeatureState *suggestedMoveToFolderInContextMenu;
@property (class, readonly) DOCFeatureState *usbRenameErase;
@property (class, readonly) DOCFeatureState *usbDiskProperties;
@property (class, readonly) DOCFeatureState *forceUnmount;
@property (class, readonly) DOCFeatureState *returnToSender;
@property (class, readonly) DOCFeatureState *showTips;
@property (class, readonly) DOCFeatureState *searchByTopicsAndCategories;
@property (class, readonly) BOOL quickLookInSeparateProcess;
@property (class, readonly) BOOL supportsQuickLookInSharedWindow;

+ (BOOL)supportsQuickLookInsteaedOfOpen:(id)a0;

@end
