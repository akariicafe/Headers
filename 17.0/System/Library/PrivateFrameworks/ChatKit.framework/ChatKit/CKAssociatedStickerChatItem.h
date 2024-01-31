@class NSString, CKMediaObject, NSDictionary, IMSticker, NSNumber;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem

@property (class, nonatomic) BOOL userHasDraggedSticker;

@property (copy, nonatomic) IMSticker *sticker;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, nonatomic) NSDictionary *stickerUserInfo;
@property (readonly, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) NSString *stickerPackName;
@property (readonly, nonatomic) NSString *stickerPackGUID;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) BOOL isCustomSticker;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL canShowInAppStore;
@property (readonly, nonatomic) BOOL isDraggable;

+ (id)stickerScaleDuringMoveAnimation;
+ (id)_droppedStickers;
+ (id)_showingStickers;
+ (void)addDroppedSticker:(id)a0;
+ (void)clearTranscriptDisplayCaches;
+ (double)computeHorizonatalStickerFrameOffset:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentSize:(struct CGSize { double x0; double x1; })a1 forPositioningWithinContentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a3 forTranscriptOrientation:(char)a4;
+ (BOOL)isDroppedSticker:(id)a0;
+ (void)removeDroppedSticker:(id)a0;
+ (id)stickerMoveAnimationFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (Class)cellClass;
- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (id)attributionImage;
- (id)attributionImageTintColor;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)insertionHandler;
- (BOOL)isSticker;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)messageSummaryInfoValueForKey:(id)a0;
- (char)transcriptOrientation;

@end
