@class NSString;
@protocol _NUIBoxArrangementContainer;

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing> {
    struct _NUIBoxArrangement { id<_NUIBoxArrangementContainer> container; long long horzDist; long long vertDist; BOOL hasValidMeasurement; struct vector<_NUIBoxArrangementCell, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__begin_; struct _NUIBoxArrangementCell *__end_; struct __compressed_pair<_NUIBoxArrangementCell *, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__value_; } __end_cap_; } cells; struct CGSize { double width; double height; } measureSize; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
    struct { unsigned char horzAlign : 8; unsigned char vertAlign : 8; } _boxFlags;
}

@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerBoxViewWithArrangedSubviews:(id)a0;

- (void)dealloc;
- (id)debugDictionary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrangedDebugDescription;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (void)invalidateInternalStateForInvalidation:(long long)a0;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)a0;
- (void)populateBoxArrangementCells:(void *)a0;

@end
