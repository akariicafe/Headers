@protocol MULayoutItem;

@interface MUEdgeLayoutInternal : MUConstraintLayoutInternal {
    void /* unknown type, empty encoding */ builder;
}

@property (nonatomic, weak) id<MULayoutItem> item;
@property (nonatomic, weak) id<MULayoutItem> container;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) float priority;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 container:(id)a1;
- (id)initWithItem:(id)a0 container:(id)a1 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)initWithItem:(id)a0 container:(id)a1 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 edges:(unsigned long long)a3 priority:(float)a4;

@end
