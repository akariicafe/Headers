@interface UARPMetaDataTLV16 : UARPMetaDataTLV

- (id)init;
- (id)generateTLV:(unsigned int)a0 tlvValue:(unsigned short)a1;
- (id)tlvValue:(unsigned short)a0;

@end
