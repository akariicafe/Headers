@class NSString;
@protocol _NUIGridArrangementContainer;

@interface _NUIFlowRowContainer : NSObject <_NUIGridArrangementContainer, NUIArrangementItem> {
    struct _NUIGridArrangement { id<_NUIGridArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; BOOL baselineRelative; BOOL hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _gridArrangement;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    const void *_flowArrangement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)populateGridArrangementCells:(void *)a0;
- (void)populateGridArrangementDimension:(void *)a0 withCells:(const void *)a1 axis:(long long)a2;

@end
