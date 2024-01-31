@class NSString, NSMutableArray;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deferredFrame;
    double _deferredMaxTotalWidth;
    double _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    long long _deferredSegmentedControlStyle;
    unsigned long long _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}

@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sizeToFit;
- (void)removeAllSegments;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)imageForSegmentAtIndex:(unsigned long long)a0;
- (void)insertSegmentWithImage:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)insertSegmentWithTitle:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (unsigned long long)numberOfSegments;
- (void)removeSegmentAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (long long)segmentedControlStyle;
- (long long)selectedSegmentIndex;
- (void)setImage:(id)a0 forSegmentAtIndex:(unsigned long long)a1;
- (void)setSegmentedControlStyle:(long long)a0;
- (void)setSelectedSegmentIndex:(long long)a0;
- (void)setTitle:(id)a0 forSegmentAtIndex:(unsigned long long)a1;
- (id)titleForSegmentAtIndex:(unsigned long long)a0;
- (void)_commitDeferredInterfaceUpdates;
- (void)_insertSegmentWithValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveSegmentsAsDeferred;
- (void)sizeToFitWithMinimumSegmentWidth:(double)a0 maximumTotalWidth:(double)a1;

@end
