@interface PXMagazineFrame : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly, nonatomic) long long numberOfTiles;
@property (nonatomic) double aspectRatio;
@property (nonatomic) double minAspectRatio;
@property (nonatomic) double maxAspectRatio;

- (id)initWithWidth:(long long)a0 height:(long long)a1;
- (id)description;

@end
