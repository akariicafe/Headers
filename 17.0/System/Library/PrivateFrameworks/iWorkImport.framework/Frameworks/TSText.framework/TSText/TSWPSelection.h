@class TSWPRangeArray, NSArray, NSString;

@interface TSWPSelection : TSKSelection <TSDTextSelection>

@property (class, readonly, nonatomic) unsigned long long activityExcerptLength;

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visualDefinitionRange;
@property (nonatomic) unsigned long long p_leadingCharIndex;
@property (readonly, nonatomic) TSWPRangeArray *ranges;
@property (readonly, nonatomic) TSWPRangeArray *visualRanges;
@property (readonly, nonatomic) NSArray *visualRangesArray;
@property (readonly, nonatomic) unsigned long long visualRangeCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } superRange;
@property (readonly, nonatomic) unsigned long long insertionCharIndex;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } rawRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } smartFieldRange;
@property (nonatomic) unsigned long long headCharIndex;
@property (nonatomic) unsigned long long tailCharIndex;
@property (readonly, nonatomic) BOOL caretIsLeadingEdge;
@property (readonly, nonatomic) unsigned long long leadingCharIndex;
@property (readonly, nonatomic) long long caretLFAffinity;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) BOOL validVisualRanges;
@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) long long styleInsertionBehavior;
@property (readonly, nonatomic) BOOL isRange;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL allowsKeyCommandCaching;
@property (retain, nonatomic) TSWPRangeArray *i_logicalRanges;
@property (nonatomic) BOOL i_validVisualRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(long long)a1 leadingEdge:(BOOL)a2 storage:(id)a3;
+ (BOOL)p_checkEndOfLineFlagForRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 leadingEdge:(inout BOOL *)a1 type:(inout long long *)a2 endOfLine:(BOOL)a3 storage:(id)a4;
+ (id)selectionFromWPSelection:(id)a0;
+ (id)selectionWithRanges:(id)a0;

- (unsigned long long)start;
- (unsigned long long)end;
- (BOOL)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)compare:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(long long)a0;
- (id)copyWithNewType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewType:(long long)a0 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualRanges:(id)a0;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3;
- (BOOL)isEquivalentForInsertionStyle:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)constrainToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0 withOptions:(unsigned long long)a1;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 newCaretAffinity:(long long)a1;
- (id)copyWithNewRanges:(id)a0;
- (id)copyWithNewStyleInsertionBehavior:(long long)a0 newCaretAffinity:(long long)a1;
- (id)copyWithVisualRanges:(id)a0 headCharIndex:(unsigned long long)a1 tailCharIndex:(unsigned long long)a2 rightToLeft:(BOOL)a3 sameLine:(BOOL)a4;
- (void)i_setHeadCharIndex:(unsigned long long)a0 tailCharIndex:(unsigned long long)a1;
- (id)initWithRangeArray:(id)a0;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 caretIsLeadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 caretIsLeadingEdge:(BOOL)a5 storage:(id)a6;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(BOOL)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 caretIsLeadingEdge:(BOOL)a6 leadingCharIndex:(unsigned long long)a7 headCharIndex:(unsigned long long)a8 tailCharIndex:(unsigned long long)a9;
- (id)p_copyWithClass:(Class)a0;
- (BOOL)p_isEqual:(id)a0;
- (BOOL)p_isRange;

@end
