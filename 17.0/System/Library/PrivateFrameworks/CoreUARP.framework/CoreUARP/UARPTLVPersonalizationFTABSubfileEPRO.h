@interface UARPTLVPersonalizationFTABSubfileEPRO : UARPMetaDataTLV16

@property (readonly) unsigned short epro;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setEpro:(unsigned short)a0;
- (id)tlvValue;

@end
