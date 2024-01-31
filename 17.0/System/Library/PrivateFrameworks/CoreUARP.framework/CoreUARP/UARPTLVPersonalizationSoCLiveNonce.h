@interface UARPTLVPersonalizationSoCLiveNonce : UARPMetaDataTLV8

@property (readonly) unsigned char liveNonce;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setLiveNonce:(unsigned char)a0;
- (id)tlvValue;

@end
