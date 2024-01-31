@interface UARPTLVPayloadCompressionAlgorithm : UARPMetaDataTLV {
    unsigned int _tlvType;
    unsigned int _tlvLength;
    int _compressionAlgorithm;
}

@property (readonly) int compressionAlgorithm;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (unsigned int)tlvType;
- (id)generateTLV;
- (void)setCompressionAlgorithm:(int)a0;
- (unsigned int)tlvLength;
- (id)tlvValue;

@end
