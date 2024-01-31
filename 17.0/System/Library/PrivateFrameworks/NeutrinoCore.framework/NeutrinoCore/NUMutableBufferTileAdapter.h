@class NSString;
@protocol NUBuffer, NUMutableBuffer;

@interface NUMutableBufferTileAdapter : NSObject <NUMutableBufferTile>

@property (readonly, nonatomic) id<NUMutableBuffer> mutableBuffer;
@property (readonly, nonatomic) id<NUBuffer> buffer;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } frameRect;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } contentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrameRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 contentRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 buffer:(id)a2;

@end
