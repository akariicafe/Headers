@interface HVMutableContentState : HVContentState

- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (void)setLevelOfService:(unsigned char)a0;
- (void)setConsumers:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
