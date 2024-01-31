@interface UARPTLVPersonalizationSecurityDomain : UARPMetaDataTLV32

@property (readonly) unsigned int securityDomain;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void)setSecurityDomain:(unsigned int)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
