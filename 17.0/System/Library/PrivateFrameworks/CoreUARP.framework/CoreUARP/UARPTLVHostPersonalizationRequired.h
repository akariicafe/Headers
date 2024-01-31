@interface UARPTLVHostPersonalizationRequired : UARPMetaDataTLV8

@property (readonly) unsigned char isRequired;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setIsRequired:(unsigned char)a0;
- (id)tlvValue;

@end
