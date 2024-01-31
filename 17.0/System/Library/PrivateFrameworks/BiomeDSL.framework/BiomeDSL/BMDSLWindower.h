@class NSString, BMDSL, BMDSLWindowAssigner;

@interface BMDSLWindower : BMDSL

@property (readonly, copy, nonatomic) NSString *keyedPath;
@property (readonly, nonatomic) BMDSLWindowAssigner *assigner;
@property (readonly, nonatomic) BMDSL *upstream;

+ (BOOL)supportsSecureCoding;
+ (id)name;

- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (id)bpsPublisher;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUpstream:(id)a0 keyedPath:(id)a1 assigner:(id)a2;
- (id)initWithUpstream:(id)a0 keyedPath:(id)a1 assigner:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
