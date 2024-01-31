@class NSData;

@interface UARPMetaDataTLV : NSObject {
    NSData *_tlvValue;
}

@property (readonly) unsigned int tlvType;
@property (readonly) unsigned int tlvLength;

+ (id)metaDataTable;
+ (id)metaDataTableEntry;
+ (id)tlvFromKey:(id)a0 value:(id)a1;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvFromType:(unsigned int)a0 length:(unsigned int)a1 value:(void *)a2;
+ (id)tlvTypeName:(unsigned int)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)generateTLV;
- (id)initWithType:(unsigned int)a0 length:(unsigned int)a1 value:(void *)a2;
- (id)tlvValue;

@end
