@protocol BMDSLArgumentSelector;

@interface BMDSLArgumentTransform : BMDSLBaseCodable <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMDSLArgumentSelector> selector;

+ (id)withSelector:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSelector:(id)a0 name:(id)a1 version:(unsigned int)a2;
- (id)initWithSelector:(id)a0;
- (void).cxx_destruct;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (id)initWithCoder:(id)a0;

@end
