@class ICThumbnailKey, NSString, ICAppearanceInfo, UIColor, UITraitCollection;

@interface ICThumbnailConfiguration : NSObject

@property (copy, nonatomic) id associatedObject;
@property (readonly, copy, nonatomic) NSString *associatedObjectIdentifier;
@property (copy, nonatomic) NSString *associatedObjectTitle;
@property (readonly, nonatomic) long long thumbnailType;
@property (readonly, copy) ICThumbnailKey *uniqueKey;
@property (readonly, nonatomic) long long cacheLevel;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) ICAppearanceInfo *appearanceInfo;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) BOOL hasBorder;
@property (copy, nonatomic) id /* block */ fallbackBlock;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initForSystemPaperChromeLayerWithThumbnailType:(long long)a0 traitCollection:(id)a1;
- (id)initForAttachment:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (id)initForAvatarWithParticipants:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 hasBorder:(BOOL)a2;
- (id)initForLargeQuickNoteWidgetWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initForNoteGridWithNote:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (id)initForNoteListWithFoundAttachment:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (id)initForNoteListWithNote:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (id)initForNoteNavigationBarIconWithNote:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (id)initForSharePreviewThumbnailWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initForShareThumbnailWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initForShortcutsWithNote:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (id)initForSmallQuickNoteWidgetWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initForSystemPaperChromeWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initForSystemPaperPreviewWithNote:(id)a0 appearanceInfo:(id)a1;
- (id)initWithThumbnailType:(long long)a0 associatedObject:(id)a1 associatedObjectIdentifier:(id)a2 associatedObjectTitle:(id)a3 accountIdentifier:(id)a4 cacheLevel:(long long)a5 preferredSize:(struct CGSize { double x0; double x1; })a6 scale:(double)a7 appearanceInfo:(id)a8 backgroundColor:(id)a9 hasBorder:(BOOL)a10;
- (id)initWithThumbnailType:(long long)a0 uniqueKey:(id)a1 associatedObject:(id)a2 associatedObjectIdentifier:(id)a3 associatedObjectTitle:(id)a4 accountIdentifier:(id)a5 cacheLevel:(long long)a6 preferredSize:(struct CGSize { double x0; double x1; })a7 scale:(double)a8 appearanceInfo:(id)a9 backgroundColor:(id)a10 hasBorder:(BOOL)a11;

@end
