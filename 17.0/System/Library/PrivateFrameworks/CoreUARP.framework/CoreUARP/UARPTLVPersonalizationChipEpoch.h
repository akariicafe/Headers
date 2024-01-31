@interface UARPTLVPersonalizationChipEpoch : UARPMetaDataTLV32

@property (readonly) unsigned int chipEpoch;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setChipEpoch:(unsigned int)a0;
- (id)tlvValue;

@end
