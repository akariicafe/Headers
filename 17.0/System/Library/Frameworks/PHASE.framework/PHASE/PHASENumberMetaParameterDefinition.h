@interface PHASENumberMetaParameterDefinition : PHASEMetaParameterDefinition

@property (readonly, nonatomic) double rangeMin;
@property (readonly, nonatomic) double rangeMax;
@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (id)new;

- (id)init;
- (id)initWithValue:(double)a0;
- (double)rangeMax;
- (double)rangeMin;
- (id)initWithValue:(double)a0 identifier:(id)a1;
- (id)initWithValue:(double)a0 minimum:(double)a1 maximum:(double)a2;
- (id)initWithValue:(double)a0 minimum:(double)a1 maximum:(double)a2 identifier:(id)a3;
- (id)initWithValue:(double)a0 rangeMin:(double)a1 rangeMax:(double)a2 uid:(id)a3;
- (id)initWithValue:(double)a0 uid:(id)a1;

@end
