@class NSSet, NSString, TSCHChartInfo, TSPObject, TSCHChunkManager;
@protocol TSCHMediatorProvider;

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSDReducibleImageContainer, TSKCustomFormatContainingInfo, TSKSearchable, TSSPresetSource, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient, TSDCompatibilityAwareMediaContainer> {
    TSPObject<TSCHMediatorProvider> *_mediatorPersistentObject;
    TSCHChunkManager *_chunkManager;
}

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (readonly, nonatomic) TSCHChartInfo *chart;
@property (readonly, nonatomic) TSCHChunkManager *chunkManager;
@property (readonly, nonatomic) unsigned long long multiDataSetIndex;
@property (readonly, nonatomic) unsigned long long numberOfMultiDataSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *referencedStyles;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (BOOL)needsObjectUUID;

- (void)setGeometry:(id)a0;
- (id)typeName;
- (id)geometry;
- (BOOL)isSelectable;
- (void).cxx_destruct;
- (Class)layoutClass;
- (unsigned int)elementKind;
- (void)acceptVisitor:(id)a0;
- (id)childInfos;
- (Class)repClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (BOOL)aspectRatioLocked;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canSizeBeChangedIncrementally;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 animationFilter:(id)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setInsertionCenterPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)supportsHyperlinks;
- (BOOL)supportsParentRotation;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)willModify;
- (BOOL)requiresStagesBuildingInReverse;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)suppliesFinalTextures;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)a0 key:(id)a1;
- (void)hideAllTitles;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)a0;
- (void)reassignPasteboardCustomFormatKeys;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (long long)mediaCompatibilityTypeForData:(id)a0 associatedHint:(id)a1;
- (id)applyStyleSwapTuple:(id)a0;
- (id)applyStyleSwapTuples:(id)a0;
- (void)finalizeDataOnDeepCopyBeforeSerializingForDragAndDrop;
- (BOOL)hasBackgroundLayerForPieChart;
- (BOOL)hasReferenceLines;
- (id)initWithContext:(id)a0 chart:(id)a1;
- (id)initWithContext:(id)a0 chartType:(id)a1 chartAreaFrame:(id)a2 legendFrame:(id)a3 stylePreset:(id)a4 privateSeriesStyles:(id)a5;
- (id)initWithContext:(id)a0 chartType:(id)a1 chartAreaFrame:(id)a2 stylePreset:(id)a3 privateSeriesStyles:(id)a4;
- (id)initWithContext:(id)a0 chartType:(id)a1 chartBodyFrame:(id)a2 stylePreset:(id)a3 privateSeriesStyles:(id)a4;
- (id)initWithContext:(id)a0 chartType:(id)a1 circumscribingFrame:(id)a2 stylePreset:(id)a3 privateSeriesStyles:(id)a4;
- (id)initWithContext:(id)a0 chartType:(id)a1 legendShowing:(id)a2 chartAreaFrame:(id)a3 legendFrame:(id)a4 stylePreset:(id)a5 privateSeriesStyles:(id)a6 chartNonStyle:(id)a7 legendNonStyle:(id)a8 valueAxisNonStyles:(id)a9 categoryAxisNonStyles:(id)a10 seriesNonStyles:(id)a11 refLineNonStylesMap:(id)a12 refLineStylesMap:(id)a13;
- (id)initWithContext:(id)a0 chartType:(id)a1 legendShowing:(id)a2 chartAreaFrame:(id)a3 stylePreset:(id)a4 privateSeriesStyles:(id)a5 chartNonStyle:(id)a6 legendNonStyle:(id)a7 valueAxisNonStyles:(id)a8 categoryAxisNonStyles:(id)a9 seriesNonStyles:(id)a10 refLineNonStylesMap:(id)a11 refLineStylesMap:(id)a12;
- (id)initWithContext:(id)a0 chartType:(id)a1 legendShowing:(id)a2 chartBodyFrame:(id)a3 chartAreaFrame:(id)a4 circumscribingFrame:(id)a5 legendFrame:(id)a6 stylePreset:(id)a7 privateSeriesStyles:(id)a8 chartNonStyle:(id)a9 legendNonStyle:(id)a10 valueAxisNonStyles:(id)a11 categoryAxisNonStyles:(id)a12 seriesNonStyles:(id)a13 refLineNonStylesMap:(id)a14 refLineStylesMap:(id)a15;
- (id)initWithContext:(id)a0 chartType:(id)a1 legendShowing:(id)a2 chartBodyFrame:(id)a3 stylePreset:(id)a4 privateSeriesStyles:(id)a5 chartNonStyle:(id)a6 legendNonStyle:(id)a7 valueAxisNonStyles:(id)a8 categoryAxisNonStyles:(id)a9 seriesNonStyles:(id)a10 refLineNonStylesMap:(id)a11 refLineStylesMap:(id)a12;
- (id)initWithContext:(id)a0 chartType:(id)a1 legendShowing:(id)a2 circumscribingFrame:(id)a3 stylePreset:(id)a4 privateSeriesStyles:(id)a5 chartNonStyle:(id)a6 legendNonStyle:(id)a7 valueAxisNonStyles:(id)a8 categoryAxisNonStyles:(id)a9 seriesNonStyles:(id)a10 refLineNonStylesMap:(id)a11 refLineStylesMap:(id)a12;
- (BOOL)isEquivalentForSerializationRoundTrip:(id)a0;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)a0;
- (unsigned long long)multiDataSetIndex;
- (id)p_copyFor3DAs2DWithContext:(id)a0 chartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 legendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_drawableGeometry;
- (void)p_setDrawableGeometry:(id)a0 clearObjectPlaceholderFlag:(BOOL)a1;
- (void)setGeometry:(id)a0 omitLegendResize:(BOOL)a1;
- (void)setPersistentMediator:(id)a0;
- (BOOL)shouldAddMultiDataBuildWhenAddingToDocument;
- (id)styleOwnerFromSwapType:(int)a0 andIndex:(unsigned long long)a1;
- (void)tsaMoveToPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForPositioning;

@end
