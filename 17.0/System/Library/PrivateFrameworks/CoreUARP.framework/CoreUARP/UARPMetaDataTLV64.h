@interface UARPMetaDataTLV64 : UARPMetaDataTLV

- (id)init;
- (id)generateTLV:(unsigned int)a0 tlvValue:(unsigned long long)a1;
- (id)tlvValue:(unsigned long long)a0;

@end
