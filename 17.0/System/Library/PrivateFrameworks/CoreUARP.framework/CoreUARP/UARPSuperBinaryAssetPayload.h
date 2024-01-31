@class NSData, NSString, NSArray, NSURL, NSDictionary, NSMutableArray, UARPAssetTag, NSObject, UARPAssetVersion, NSMutableData;
@protocol OS_os_log;

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_tag;
    UARPAssetTag *_payloadTag;
    UARPAssetVersion *_assetVersion;
    NSMutableArray *_tlvs;
    NSMutableArray *_composeTLVs;
    NSURL *_url;
    NSURL *_superBinaryURL;
    NSString *_friendlyName;
    NSDictionary *_dict;
    BOOL _isWritable;
    unsigned int _blockSize;
    int _compression;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _uarpVersion;
    struct UARPPayloadHeader { unsigned int payloadHeaderLength; unsigned int payloadTag; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } payloadVersion; unsigned int payloadMetadataOffset; unsigned int payloadMetadataLength; unsigned int payloadOffset; unsigned int payloadLength; } _payloadHeader;
    NSMutableData *_compressionHeaders;
    unsigned int _compressionHeaderIndex;
    BOOL _allowCompressionHeaders;
    NSMutableData *_metaData;
    NSURL *_compressedPayloadURL;
}

@property (readonly) NSArray *tlvs;
@property (readonly, copy) NSData *payload;
@property (readonly) NSData *metaData;
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) BOOL needsCompression;
@property (readonly) BOOL allowCompressionHeaders;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) unsigned long long compressionHeaderIndex;
@property (readonly) unsigned long long formatVersion;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)prepareMetaData;
- (void)addMetaDataTLV:(id)a0;
- (id)hashPayloadWithAlgorithm:(int)a0 error:(id *)a1;
- (void)addMetaDataTLVs:(id)a0;
- (BOOL)appendCompressedPayloadToFile:(id)a0 error:(out id *)a1;
- (BOOL)appendPayloadToFile:(id)a0 bytesWritten:(unsigned long long *)a1 error:(id *)a2;
- (id)compressPayloadChunk:(id)a0 offset:(unsigned int)a1 error:(id *)a2;
- (BOOL)compressPayloadURLToFileHandle:(id)a0 error:(id *)a1;
- (BOOL)expandDictionaryWithPayloadsFolder:(id)a0 metaDataTable:(id)a1 error:(id *)a2;
- (BOOL)expandPayloadToURL:(id)a0 payloadFilename:(id)a1 superbinary:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 error:(id *)a5;
- (BOOL)expandPayloadToURL:(id)a0 superbinary:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;
- (id)hashMetaData;
- (id)hashMetaDataWithAlgorithm:(int)a0 error:(id *)a1;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x0; unsigned int x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (id)initWithPayloadTag:(id)a0 assetVersion:(id)a1;
- (id)initWithPayloadTag:(id)a0 assetVersion:(id)a1 writable:(BOOL)a2;
- (id)initWithPayloadTag:(id)a0 majorVersion:(unsigned long long)a1 minorVersion:(unsigned long long)a2 releaseVersion:(unsigned long long)a3 buildVersion:(unsigned long long)a4;
- (id)initWithTag:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (BOOL)parseFromPlistPayloadMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (BOOL)parseFromPlistVersion:(id *)a0;
- (id)prepareData;
- (unsigned long long)preparePackedTag;
- (BOOL)prepareUarpVersion:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (unsigned long long)preparedDataLength;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMetadata;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangePayload;
- (BOOL)setPayloadToContentsOfFile:(id)a0 friendlyName:(id)a1 error:(id *)a2;
- (BOOL)setPayloadToContentsOfURL:(id)a0 friendlyName:(id)a1;
- (BOOL)setPayloadToData:(id)a0;
- (void)setSuperBinaryURL:(id)a0;
- (unsigned long long)unpreparedDataLength;
- (BOOL)updateFormatVersion:(unsigned long long)a0;
- (BOOL)writePayloadData:(id)a0 offset:(unsigned long long)a1 error:(out id *)a2;

@end
