@interface UARPTLVPersonalizationSecurityMode : UARPMetaDataTLV32

@property (readonly) unsigned int securityMode;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void)setSecurityMode:(unsigned int)a0;
- (id)init;
- (id)description;
- (id)generateTLV;
- (id)tlvValue;

@end
