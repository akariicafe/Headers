@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _rowCharRange;
    double _containerWidth;
    NSArray *_rowArray;
    BOOL _collapseBorders;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 containerWidth:(double)a1 rowArray:(id)a2 collapseBorders:(BOOL)a3;

@end
