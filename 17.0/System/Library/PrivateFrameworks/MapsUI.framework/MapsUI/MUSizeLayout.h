@class MUSizeLayoutInternal;
@protocol MULayoutItem;

@interface MUSizeLayout : MUConstraintLayout {
    MUSizeLayoutInternal *_internal;
}

@property (class, readonly, nonatomic) double useIntrinsicContentSize;

@property (weak, nonatomic) id<MULayoutItem> item;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) float priority;

- (id)initWithItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 priority:(float)a2;
- (id)initWithItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
