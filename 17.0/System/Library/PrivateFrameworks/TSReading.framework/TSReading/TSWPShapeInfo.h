@class TSWPPadding, NSString, TSWPColumns, TSDInfoGeometry, TSWPShapeStyle, TSWPStorage, NSObject, TSWPLineHintCollection, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor> {
    BOOL _textUserEditable;
}

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (readonly, nonatomic) BOOL displaysInstructionalText;
@property (readonly, nonatomic) NSString *instructionalText;
@property (nonatomic) BOOL shrinkTextToFit;
@property (nonatomic) BOOL textIsVertical;
@property (nonatomic) BOOL allowsLastLineTruncation;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) unsigned int verticalAlignment;
@property (nonatomic) long long contentWritingDirection;
@property (retain, nonatomic) TSWPPadding *padding;
@property (retain, nonatomic) TSWPColumns *columns;
@property (readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property (retain, nonatomic) TSWPLineHintCollection *lineHints;
@property (nonatomic, getter=isTextUserEditable) BOOL textUserEditable;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

+ (void)setDefaultInstructionalText:(id)a0;

- (void)dealloc;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (id)childInfos;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (Class)repClass;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 byGlyphStyle:(int)a1 animationFilter:(id)a2;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (struct CGPoint { double x0; double x1; })autosizePositionOffset;
- (struct CGPoint { double x0; double x1; })autosizePositionOffsetForGeometry:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransformForInfoGeometry:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)commandForPasteStyleWithContext:(id)a0 pasteboardStyles:(id)a1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 context:(id)a1 transformedObjects:(id)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (Class)editorClass;
- (void)fixPositionOfImportedAutosizedShape;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 wpStorage:(id)a4;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 wpStorage:(id)a3;
- (double)pOffsetForParagraphAlignment:(struct CGSize { double x0; double x1; })a0;
- (double)pOffsetForVerticalAlignment:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)p_chunkCountForByBullet;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (BOOL)p_hasContentForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)a0;
- (id)presetKind;
- (void)processSelectedStoragesWithStatisticsController:(id)a0;
- (id)propertyMapForNewPreset;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (struct CGPoint { double x0; double x1; })transformableObjectAnchorPoint;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;

@end
