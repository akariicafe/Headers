@interface _SUICProgressRingLayer : _SUICRingLayer

@property (nonatomic) BOOL spinning;
@property (nonatomic) double progress;

- (id)init;
- (void)setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
