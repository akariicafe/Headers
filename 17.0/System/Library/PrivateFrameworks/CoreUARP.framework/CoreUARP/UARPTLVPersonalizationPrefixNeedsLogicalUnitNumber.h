@interface UARPTLVPersonalizationPrefixNeedsLogicalUnitNumber : UARPMetaDataTLV8

@property (readonly) unsigned char prefixNeedsLogicalUnitNumber;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)generateTLV;
- (void)setPrefixNeedsLogicalUnitNumber:(unsigned char)a0;
- (id)tlvValue;

@end
