@class HKGraphTile, HKGraphViewRenderer;

@interface _HKGraphTileBackgroundRenderingContext : NSObject <HKGraphViewTileThreadRenderer>

@property (readonly, nonatomic) HKGraphTile *graphTile;
@property (readonly, nonatomic) HKGraphViewRenderer *graphViewRenderer;
@property (readonly, nonatomic) struct CGSize { double width; double height; } tileSize;
@property (readonly, nonatomic) long long configurationChangedCounter;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithGraphTile:(id)a0 graphViewRenderer:(id)a1 tileSize:(struct CGSize { double x0; double x1; })a2 configurationChangedCounter:(long long)a3;
- (void)renderTileContent;
- (BOOL)sameForRendering:(id)a0;

@end
