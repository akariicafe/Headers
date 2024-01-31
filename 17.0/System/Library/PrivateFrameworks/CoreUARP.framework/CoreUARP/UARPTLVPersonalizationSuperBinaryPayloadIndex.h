@interface UARPTLVPersonalizationSuperBinaryPayloadIndex : UARPMetaDataTLV32

@property (readonly) unsigned int payloadIndex;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setPayloadIndex:(unsigned int)a0;
- (id)tlvValue;

@end
