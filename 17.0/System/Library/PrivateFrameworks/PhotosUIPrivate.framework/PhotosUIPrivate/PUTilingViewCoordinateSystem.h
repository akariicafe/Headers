@class NSString, PUTilingView;
@protocol PUTilingCoordinateSystem;

@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem>

@property (readonly, weak, nonatomic) PUTilingView *tilingView;
@property (readonly, weak, nonatomic) id<PUTilingCoordinateSystem> parentCoordinateSystem;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } coordinateSystemOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTilingView:(id)a0;

@end
