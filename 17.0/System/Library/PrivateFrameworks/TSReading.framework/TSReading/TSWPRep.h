@class TSWPEditingController, TSKHighlightArrayController, TSDTilingLayer, TSWPStorage, TSWPSelection, CALayer, TSWPSearchReference, NSString, CAShapeLayer, NSArray, TSWPStorageSpellChecker, TSKPulseAnimationController, TSWPLayout;

@interface TSWPRep : TSDContainerRep <TSDTilingLayerDelegate, CAAnimationDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, TSDDecorator> {
    TSDTilingLayer *_textLayers[2];
    CALayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    TSKPulseAnimationController *_caretPulseController;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    TSWPStorageSpellChecker *_spellChecker;
    struct _NSRange { unsigned long long location; unsigned long long length; } _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    TSWPSelection *_lastSelection;
    BOOL _selectionChanged;
    BOOL _markChanged;
    unsigned long long _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _secondaryHighlightChanged;
    BOOL _indentAnimationRunning;
    CALayer *_indentAnimationLayer;
    long long _indentDelta;
    SEL _indentSelector;
    id _indentTarget;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    CALayer *_dragAndDropCaretLayer;
}

@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformToConvertNaturalToScaledRoot;
@property (retain, nonatomic) NSArray *searchReferences;
@property (retain, nonatomic) TSWPSearchReference *activeSearchReference;
@property (nonatomic) BOOL findIsShowing;
@property (nonatomic) BOOL shouldHideSelectionControls;
@property (readonly, nonatomic) TSWPLayout *layout;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) TSWPSelection *selection;
@property (nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dragRange;
@property (readonly, nonatomic) TSWPEditingController *textEditor;
@property (nonatomic) BOOL useKeyboardWhenEditing;
@property (nonatomic) TSWPSelection *dropSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)selectionRects;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (Class)layerClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (void)viewDidAppear;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (id)beginEditing;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (BOOL)isEditing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSelection:(id)a0;
- (void)willBeRemoved;
- (id)siblings;
- (int)tilingMode;
- (void)viewScaleDidChange;
- (void)editingDidEnd;
- (void)willBeginZooming;
- (void)didUpdateLayer:(id)a0;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x0; double x1; })a0 isTail:(BOOL)a1 selectionType:(int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)directlyManagesLayerContent;
- (BOOL)forceTiling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })glyphRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 includingLabel:(BOOL)a1;
- (BOOL)preventClipToColumn;
- (id)repForCharIndex:(unsigned long long)a0 isStart:(BOOL)a1;
- (id)smartFieldAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)textLayer;
- (Class)wpEditorClass;
- (void)p_addRoundedRectToContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)p_canRepBeginEditingOnDoubleTap;
- (void)p_destroyLayer:(int)a0;
- (void)p_selectionChangedNotification:(id)a0;
- (void)p_updateSecondaryHighlightLayer;
- (BOOL)shouldShowKnobs;
- (void)tilingLayerWillSetNeedsDisplay:(id)a0;
- (BOOL)handlesEditMenu;
- (void)invalidateKnobs;
- (void)p_createSelectionHighlightLayer;
- (void)p_setSelectionLineLayersHidden:(BOOL)a0;
- (void)p_updateSuppressedSpellingRange;
- (void)addAdditionalChildLayersToArray:(id)a0;
- (void)addKnobsToArray:(id)a0;
- (void)animateIndent:(long long)a0 target:(id)a1 action:(SEL)a2;
- (BOOL)canEditWithEditor:(id)a0;
- (void)canvasDidBeginFreeTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForCharIndex:(unsigned long long)a0 caretAffinity:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForCharIndex:(unsigned long long)a0 leadingEdge:(BOOL)a1 caretAffinity:(int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForSelection:(id)a0;
- (unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)a0;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x0; double x1; })a0 allowPastBreak:(BOOL)a1 allowNotFound:(BOOL)a2 isAtEndOfLine:(BOOL *)a3 leadingEdge:(BOOL *)a4;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x0; double x1; })a0 allowPastBreak:(BOOL)a1 allowNotFound:(BOOL)a2 pastCenterGoesToNextChar:(BOOL)a3 isAtEndOfLine:(BOOL *)a4 leadingEdge:(BOOL *)a5;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x0; double x1; })a0 allowPastBreak:(BOOL)a1 isAtEndOfLine:(BOOL *)a2;
- (void)clearSecondaryHighlight;
- (id)closestColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)columnForCharIndex:(unsigned long long)a0;
- (BOOL)containsText;
- (id)decoratorOverlayLayers;
- (void)didDrawInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (void)didEndZooming;
- (void)disableCaretAnimation;
- (BOOL)doesNeedDisplayOnEditingDidEnd;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0 limitSelection:(id)a1 suppressInvisibles:(BOOL)a2;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (void)drawRubyInContext:(struct CGContext { } *)a0 rubyFieldStart:(unsigned long long)a1 rubyGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)enableCaretAnimation;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)gesturesDidEnd;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })glyphRectForRubyFieldAtCharIndex:(unsigned long long)a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hyperlinkContainerRep;
- (id)hyperlinkRegions;
- (id)hyperlinkRegionsConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)i_setNeedsDisplayForSelectionChange;
- (void)i_setNeedsErasableDisplayInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)imageForSearchReference:(id)a0 forPath:(struct CGPath { } *)a1 shouldPulsate:(BOOL)a2;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)invalidateAnnotationColor;
- (void)invalidateHUDState;
- (BOOL)isOverflowing;
- (BOOL)isPointInSelectedArea:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })knobCenterForSelection:(id)a0 knob:(id)a1;
- (double)knobOffsetForKnob:(id)a0 paragraphMode:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelRectForCharIndex:(unsigned long long)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; })lineMetricsAtCharIndex:(unsigned long long)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; })lineMetricsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)lineSearchReferencesForSearchReference:(id)a0;
- (id)lineSelectionsForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })naturalBoundsRectForHyperlinkField:(id)a0;
- (struct CGPath { } *)newPathForSearchReference:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })newTextLayerUnscaledBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forNewTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)newTrackerForKnob:(id)a0;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)a0;
- (void)p_addRectToContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_addRoundedRectToContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forCaret:(BOOL)a2;
- (id)p_annotationAtPoint:(struct CGPoint { double x0; double x1; })a0 outRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)p_canShowSelectionAndCaretLayers;
- (struct CGColor { } *)p_caretLayerColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_caretRectForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_convertNaturalRectToRotated:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 repAngle:(double)a1;
- (void)p_createLayer:(int)a0;
- (void)p_createMarkHighlightLayer;
- (struct CGPath { } *)p_createPathForParagraphSelection:(id)a0 needsParagraphBorder:(BOOL)a1;
- (void)p_createSelectionLineLayers;
- (void)p_createSelectionParagraphBorderLayer;
- (void)p_createSmartFieldHighlightLayer;
- (void)p_destroySpellChecker;
- (void)p_didDismissPopover:(id)a0;
- (void)p_drawTextBackgroundLayerInContext:(struct CGContext { } *)a0;
- (void)p_drawTextInLayer:(id)a0 context:(struct CGContext { } *)a1 limitSelection:(id)a2 rubyGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 renderMode:(int)a4 suppressInvisibles:(BOOL)a5;
- (void)p_drawTextLayerInContext:(struct CGContext { } *)a0;
- (void)p_editingDidEndNotification:(id)a0;
- (void)p_findUIStateChangedNotification:(id)a0;
- (BOOL)p_hasEmptyList;
- (BOOL)p_hasVisibleContents;
- (void)p_hideCaretLayer;
- (void)p_hideMarkHighlightLayer;
- (void)p_hideSelectionHighlightLayer;
- (void)p_hideSelectionLayers;
- (void)p_hideSelectionParagraphBorderLayer;
- (void)p_hideSmartFieldHighlightLayer;
- (id)p_hyperlinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)p_hyperlinkWithTouch:(id)a0;
- (id)p_imageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingGlyphRect:(BOOL)a1 drawBackground:(BOOL)a2 shouldPulsate:(BOOL)a3 forCaret:(BOOL)a4 drawSelection:(id)a5 suppressInvisibles:(BOOL)a6;
- (void)p_indentAfterAnimationWithOptions:(id)a0;
- (void)p_invalidateCommentKnobs;
- (void)p_invalidateSuppressedMisspellingRange;
- (BOOL)p_isSelectionSingleAnchoredDrawableAttachment;
- (id)p_lineSelectionsForSelection:(id)a0;
- (void)p_markChangedNotification:(id)a0;
- (BOOL)p_needsSpellChecker;
- (id)p_newCaretLayerWithZPosition:(double)a0;
- (struct CGPath { } *)p_newSelectionPathForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 headKnobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 tailKnobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 selectionType:(int)a3 selection:(id)a4;
- (BOOL)p_paragraphModeBorderNeededForColumn:(id)a0 dragCharIndex:(unsigned long long)a1 knobTag:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_paragraphModeRectangleForColumn:(id)a0 selection:(id)a1;
- (struct CGPoint { double x0; double x1; })p_pinPoint:(struct CGPoint { double x0; double x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)p_positionCaretLayer:(id)a0 forSelection:(id)a1 layerRelative:(BOOL)a2;
- (void)p_renderingOptionsDidChangeNotification:(id)a0;
- (void)p_selectionContentsChangedNotification:(id)a0;
- (void)p_setActiveSearchReference:(id)a0;
- (void)p_setPulseControllerActive:(BOOL)a0 autohide:(BOOL)a1;
- (void)p_setSearchReferencesToHighlight:(id)a0;
- (void)p_setSelectionHighlightColor;
- (void)p_setSuppressedMisspellingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)p_shouldDisplaySelectionControls;
- (void)p_showCaretLayer;
- (void)p_showSelectionParagraphBorderLayerWithPath:(struct CGPath { } *)a0;
- (id)p_smartFieldWithTouch:(id)a0;
- (void)p_spellCheckerLanguageDidChangeNotification:(id)a0;
- (BOOL)p_spellCheckingEnabled;
- (void)p_startCaretLayerAnimation;
- (void)p_stopCaretLayerAnimation;
- (void)p_teardown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_topicDragRectForSelection:(id)a0;
- (void)p_updateAnimationWithAnimatingPulse:(BOOL)a0;
- (void)p_updateForCurrentSelectionWithFlags:(unsigned long long)a0;
- (void)p_updateHighlights;
- (void)p_updateLayersForInsertionPointSelection:(id)a0;
- (void)p_updateLayersForRangeSelection:(id)a0 selectionFlags:(unsigned long long)a1;
- (void)p_updateMarkHighlightLayer;
- (void)p_updateSmartFieldHighlightLayer;
- (void)performBlockOnTextLayers:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })pinToClosestColumn:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pinToNaturalBounds:(struct CGPoint { double x0; double x1; })a0 andLastLineFragment:(BOOL)a1;
- (void)processFindUIStateChangedNotificationUserInfo:(id)a0;
- (void)pulseAnimationDidStop:(id)a0;
- (void)pulseAnimationDidStopForPulse:(id)a0;
- (void)pulseCaret;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMisspelledWordAtCharIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSelection:(id)a0 includeRuby:(BOOL)a1;
- (id)repForDragging;
- (id)rubyFieldAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)screenScaleDidChange;
- (id)selectionForDragAndDropNaturalPoint:(struct CGPoint { double x0; double x1; })a0 dragIsTopicSelection:(BOOL)a1;
- (void)setHighlightedHyperlinkField:(id)a0;
- (void)setNeedsDisplayInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setSecondaryHighlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 color:(struct CGColor { } *)a1 pathStyle:(int)a2;
- (BOOL)shouldAlwaysAutoHide;
- (BOOL)shouldBeginEditingWithGesture:(id)a0;
- (BOOL)shouldCreateCommentKnobs;
- (BOOL)shouldCreateLockedKnobs;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldCreateTextKnobs;
- (BOOL)shouldIgnoreSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0 withRecognizer:(id)a1;
- (void)spellCheckingStateChanged;
- (id)textBackgroundLayer;
- (id)textImageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textImageForSelection:(id)a0;
- (id)textImageForSelection:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 usingGlyphRect:(BOOL)a2 drawBackground:(BOOL)a3 shouldPulsate:(BOOL)a4 suppressInvisibles:(BOOL)a5;
- (id)textImageForSelection:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 usingGlyphRect:(BOOL)a2 shouldPulsate:(BOOL)a3 suppressInvisibles:(BOOL)a4;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)a0;
- (void)tilingLayerWillSetNeedsLayout:(id)a0;
- (void)updateFromLayout;
- (void)updatePositionsOfKnobs:(id)a0;
- (BOOL)useDynamicTiling;
- (void)verticalTextPropertyChanged;
- (void)viewScrollingEnded;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (BOOL)wantsToHandleTapsWhenLocked;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(id)a0 beginEditing:(BOOL)a1;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; BOOL x5; })wordMetricsAtCharIndex:(unsigned long long)a0;

@end
