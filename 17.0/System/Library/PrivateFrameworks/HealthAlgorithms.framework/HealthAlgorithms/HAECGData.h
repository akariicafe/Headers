@interface HAECGData : NSObject

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) float value;

- (id)initWithFlags:(unsigned long long)a0 value:(float)a1;

@end
