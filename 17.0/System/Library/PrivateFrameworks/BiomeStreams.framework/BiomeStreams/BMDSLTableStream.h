@class BMDSL;
@protocol BMTableQueryExpression;

@interface BMDSLTableStream : BMDSL <BMTableStreamQuery>

@property (retain, nonatomic) BMDSL *upstream;
@property (retain, nonatomic) id<BMTableQueryExpression> expression;

+ (BOOL)supportsSecureCoding;

- (id)select:(id)a0;
- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (id)bpsPublisher;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUpstream:(id)a0 expression:(id)a1;
- (id)initWithUpstream:(id)a0 expression:(id)a1 name:(id)a2 version:(unsigned int)a3;

@end
