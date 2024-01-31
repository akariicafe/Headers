@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload {
    unsigned long long _notifyType;
    NSData *_data;
    NEIKEv2SPI *_spi;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
