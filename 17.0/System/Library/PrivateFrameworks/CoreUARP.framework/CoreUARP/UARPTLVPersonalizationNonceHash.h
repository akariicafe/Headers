@class NSData;

@interface UARPTLVPersonalizationNonceHash : UARPMetaDataTLVData

@property (readonly) NSData *nonceHash;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)generateTLV;
- (void)setNonceHash:(id)a0;
- (id)tlvValue;

@end
