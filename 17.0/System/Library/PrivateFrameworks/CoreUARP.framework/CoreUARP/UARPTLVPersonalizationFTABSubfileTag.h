@class UARPAssetTag;

@interface UARPTLVPersonalizationFTABSubfileTag : UARPMetaDataTLV

@property (readonly) UARPAssetTag *tag;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setTag:(id)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
