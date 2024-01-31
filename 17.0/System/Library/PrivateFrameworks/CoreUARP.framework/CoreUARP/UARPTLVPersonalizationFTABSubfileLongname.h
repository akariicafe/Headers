@class NSString;

@interface UARPTLVPersonalizationFTABSubfileLongname : UARPMetaDataTLVString

@property (readonly) NSString *longname;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)generateTLV;
- (void)setLongname:(id)a0;
- (id)tlvValue;

@end
