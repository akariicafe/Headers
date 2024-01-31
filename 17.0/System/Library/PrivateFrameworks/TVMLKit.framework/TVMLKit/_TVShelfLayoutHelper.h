@class _TVShelfViewLayout;

@interface _TVShelfLayoutHelper : NSObject {
    long long _sectionCount;
    long long *_sectionOffsets;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_cellFrames;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_headerFrames;
    struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *_sectionInsets;
}

@property (readonly, weak, nonatomic) _TVShelfViewLayout *shelfViewLayout;
@property (readonly, nonatomic) long long actualRowCount;
@property (readonly, nonatomic) double tallestInsetTop;
@property (readonly, nonatomic) double tallestInsetBottom;
@property (readonly, nonatomic) double tallestHeaderHeight;
@property (readonly, nonatomic) double tallestColumnHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_compute;
- (void)_freeBuffers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHeaderInSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (id)initWithShelfViewLayout:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSection:(long long)a0;

@end
