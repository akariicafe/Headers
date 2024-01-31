@class NSTextLayoutManager, ICTTTextEditGrouper, ICNote, NSMutableSet, NSDate, ICDisplayLink, NSCache;

@interface ICAuthorHighlightsController : NSObject

@property (nonatomic) double implicitHighlightValue;
@property (nonatomic) double fadedMultiplier;
@property (nonatomic) double highlightedMultiplier;
@property (readonly, nonatomic) ICTTTextEditGrouper *editGrouper;
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsBeingUpdated;
@property (readonly, nonatomic) NSCache *editGroupsForTextStorageDocument;
@property (copy, nonatomic) NSDate *now;
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsNeedingHighlightUpdates;
@property (readonly, nonatomic) ICDisplayLink *highlightAnimationsDisplayLink;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (nonatomic) BOOL allowsAnimations;

- (void)dealloc;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0 textLayoutManager:(id)a1;
- (id)attributesForHighlightingTextLineFragment:(id)a0 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 defaultRenderingAttributes:(id)a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)editGroupsForTextStorage:(id)a0;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1 reverse:(BOOL)a2;
- (void)flashHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withDuration:(id)a1 inTextStorage:(id)a2;
- (id)highlightColorForUserID:(id)a0;
- (id)highlightsAttributedStringForTextStorage:(id)a0;
- (id)initWithNote:(id)a0;
- (BOOL)isPerformingHighlightUpdatesForTextStorage:(id)a0;
- (void)performHighlightUpdatesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1 updates:(id /* block */)a2;
- (BOOL)rangeHasOrNeedsHighlights:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)removeHighlightAnimationsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)removeHighlightValuesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)setAttachmentHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3;
- (void)setCheckmarkHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3;
- (void)setHighlightAnimation:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextStorage:(id)a2;
- (void)setHighlightAttributesForHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3 editGroups:(id)a4;
- (void)setHighlightValue:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextStorage:(id)a2;
- (void)setTextHighlightValue:(double)a0 highlightColor:(id)a1 blendsTextColor:(BOOL)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inTextStorage:(id)a4;
- (BOOL)shouldAnimateInTextStorage:(id)a0;
- (void)textStorageDidProcessEndEditing:(id)a0;
- (void)updateDerivedConfiguration;
- (void)updateHighlightAnimationsIfNeeded;
- (void)updateHighlightAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;

@end
