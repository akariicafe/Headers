@class NSString;
@protocol NUIArrangementContainer, _NUIGridArrangementContainer, NUIGridArrangementDataSource;

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { id<_NUIGridArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; BOOL baselineRelative; BOOL hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _arrangement;
    id<NUIArrangementContainer> _container;
    id<NUIGridArrangementDataSource> _dataSource;
    double _scale;
    struct { unsigned char delegateWidth : 1; unsigned char delegateHeight : 1; unsigned char containerDirection : 1; } _flags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, weak, nonatomic) id<NUIArrangementContainer> container;
@property (readonly, weak, nonatomic) id<NUIGridArrangementDataSource> dataSource;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) long long verticalDistribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reloadData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForColumns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithContainer:(id)a0 dataSource:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })layoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)populateGridArrangementCells:(void *)a0;
- (void)populateGridArrangementDimension:(void *)a0 withCells:(const void *)a1 axis:(long long)a2;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 block:(id /* block */)a1;
- (void)positionItemsInColumns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 block:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionFrameForItemsInColumns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
