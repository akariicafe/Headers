@class UIWebClip, NSURL, CPSWebClip, SBHBookmark;

@interface SBHBookmarkIcon : SBLeafIcon

@property (retain, nonatomic) SBHBookmark *bookmark;
@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) CPSWebClip *appClip;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BOOL displaysShareBookmarkShortcutItem;
@property (readonly, nonatomic) BOOL displaysAppStoreURLShortcutItem;

- (BOOL)canBeAddedToMultiItemDrag;
- (void).cxx_destruct;
- (BOOL)canBeAddedToSubfolder;
- (id)initWithBookmark:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)draggingUserActivity;
- (BOOL)isAppClipIcon;
- (BOOL)isBookmarkIcon;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;

@end
