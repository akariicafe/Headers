@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithAmbientLightType:(int)a0;
- (id)jsonDict;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
