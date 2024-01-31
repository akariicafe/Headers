@interface _PXTrackedMediaRecord : NSObject

@property (readonly, nonatomic) id media;
@property (readonly, nonatomic) long long mediaKind;
@property (readonly, nonatomic) double timestamp;

- (id)init;
- (id)initWithMedia:(id)a0 mediaKind:(long long)a1 timestamp:(double)a2;
- (void).cxx_destruct;

@end
