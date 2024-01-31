@class NSArray, NSMapTable;

@interface PXLayoutPageMap : NSObject {
    NSMapTable *_pageMap;
    NSArray *_sources;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
}

- (id)description;
- (void).cxx_destruct;
- (void)_mapSources:(id)a0;
- (id)_screenPageForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSources:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)sourcesFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
