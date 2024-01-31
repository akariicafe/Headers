@class MUEdgeLayoutInternal;
@protocol MULayoutItem;

@interface MUEdgeLayout : MUConstraintLayout {
    MUEdgeLayoutInternal *_internal;
}

@property (weak, nonatomic) id<MULayoutItem> item;
@property (weak, nonatomic) id<MULayoutItem> container;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) float priority;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 container:(id)a1;
- (id)initWithItem:(id)a0 container:(id)a1 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)initWithItem:(id)a0 container:(id)a1 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 edges:(unsigned long long)a3 priority:(float)a4;

@end
