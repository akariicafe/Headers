@protocol MULayoutItem;

@interface MUAspectRatioLayoutInternal : MUConstraintLayoutInternal {
    void /* unknown type, empty encoding */ builder;
}

@property (nonatomic, weak) id<MULayoutItem> item;
@property (nonatomic) double aspectRatio;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 aspectRatio:(double)a1;

@end
