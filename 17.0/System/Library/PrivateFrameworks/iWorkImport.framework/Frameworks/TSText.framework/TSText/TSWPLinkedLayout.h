@class TSWPLayoutManager;

@interface TSWPLinkedLayout : TSWPLayout

@property (retain, nonatomic) TSWPLayoutManager *layoutManager;
@property (nonatomic) BOOL textLayoutValid;

- (id)layoutManager;
- (void)validate;
- (void)setLayoutManager:(id)a0;
- (BOOL)isLinked;
- (BOOL)isLastTarget;
- (id)nextTargetFirstColumn;
- (id)previousTargetLastColumn;
- (void)wrappableChildInvalidated:(id)a0;
- (BOOL)isOverflowing;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (BOOL)descendersCannotClip;
- (BOOL)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)i_validateTextLayout;
- (void)killDrawableLayouts:(id)a0;
- (BOOL)repShouldPreventCaret;
- (void)setTextLayoutValid:(BOOL)a0;

@end
