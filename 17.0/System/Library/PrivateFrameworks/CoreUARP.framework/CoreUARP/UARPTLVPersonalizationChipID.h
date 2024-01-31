@interface UARPTLVPersonalizationChipID : UARPMetaDataTLV32

@property (readonly) unsigned int chipID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void)setChipID:(unsigned int)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
