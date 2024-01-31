@class NSData, NSMutableArray, UARPAssetVersion;

@interface UARPSuperBinary : NSObject {
    NSData *_data;
    unsigned int _formatVersion;
    UARPAssetVersion *_version;
    NSData *_metaData;
}

@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSMutableArray *payloads;

- (id)initWithFilePath:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)expandMetaData:(struct UARPSuperBinaryHeader { unsigned int x0; unsigned int x1; unsigned int x2; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (id)getTlvs;
- (BOOL)preparePayload:(struct UARPPayloadHeader2 { unsigned int x0; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (BOOL)expandSuperBinary;
- (id)generatePersonalizedSuperBinary:(unsigned long long)a0;
- (id)getPayloads;
- (id)payloadWith4ccTag:(id)a0;
- (id)payloadsWithout4ccTag:(id)a0;

@end
