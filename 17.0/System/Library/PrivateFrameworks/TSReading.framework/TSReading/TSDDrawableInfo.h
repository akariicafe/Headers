@class NSString, NSURL, TSDExteriorTextWrap, TSPLazyReference, TSDInfoGeometry, NSMutableDictionary, TSDDefaultPartitioner, NSObject, TSPObject, TSSPropertySetChangeDetails;
@protocol TSDContainerInfo, TSDOwningAttachment, TSDAnnotationHosting;

@interface TSDDrawableInfo : TSPObject <TSSPropertySource, TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable> {
    TSDInfoGeometry *mGeometry;
    TSPLazyReference *mParentInfoReference;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSDDefaultPartitioner *mDefaultPartitioner;
    id<TSDAnnotationHosting> mComment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isLockable) BOOL lockable;
@property (readonly, nonatomic) BOOL supportsAttachedComments;
@property (nonatomic) BOOL aspectRatioLocked;
@property (readonly, nonatomic) BOOL canSizeBeChangedIncrementally;
@property (copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property (copy, nonatomic) NSURL *hyperlinkURL;
@property (readonly, nonatomic) BOOL supportsHyperlinks;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (retain, nonatomic) NSMutableDictionary *accessibilityDescriptions;
@property (copy, nonatomic) id<TSDAnnotationHosting> comment;
@property (readonly, nonatomic) BOOL isUserModifiable;
@property (readonly, nonatomic) Class editorClass;
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

+ (BOOL)canPartition;
+ (void)setShouldPartitionByDefault:(BOOL)a0;

- (void)dealloc;
- (void)didCopy;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (int)elementKind;
- (BOOL)containsProperty:(int)a0;
- (id)copyWithContext:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformInRoot;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (float)floatValueForProperty:(int)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (BOOL)isThemeContent;
- (Class)repClass;
- (double)CGFloatValueForProperty:(int)a0;
- (id)containingGroup;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 byGlyphStyle:(int)a1 animationFilter:(id)a2;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (void)beginCollectingChanges;
- (id)boxedObjectForProperty:(int)a0;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 animationFilter:(id)a1;
- (void)coalesceChanges:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeFullTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutFullTransform;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)a0;
- (double)doubleValueForProperty:(int)a0;
- (id)endCollectingChanges;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fullTransformInRoot;
- (int)intValueForProperty:(int)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)partitioner;
- (void)performBlockWithTemporaryLayout:(id /* block */)a0;
- (id)presetKind;
- (BOOL)reverseChunkingIsSupported;
- (id)searchForAnnotationsWithHitBlock:(id /* block */)a0;
- (void)setInsertionCenterPosition:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (struct CGPoint { double x0; double x1; })transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)willChangeProperties:(id)a0;
- (void)willChangeProperty:(int)a0;
- (void)willCopyWithOtherDrawables:(id)a0;

@end
