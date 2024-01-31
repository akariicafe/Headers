@class NSString, NSArray, NSData, UARPAssetVersion, NSNumber, NSURL;

@interface UARPSuperBinaryAssetTLV : NSObject {
    NSURL *_url;
    NSData *_data;
    NSString *_string;
    unsigned char _val8;
    unsigned short _val16;
    unsigned int _val32;
    unsigned long long _val64;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _version;
    int _valueType;
    struct uarpPayloadVersionInfo { struct UARP4ccTag { unsigned char char1; unsigned char char2; unsigned char char3; unsigned char char4; } tag; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } activeVersion; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } stagedVersion; } _versionInfo;
}

@property (readonly) unsigned long long type;
@property (readonly) NSString *valueAsString;
@property (readonly) NSNumber *valueAsNumber;
@property (readonly) NSData *valueAsData;
@property (readonly) UARPAssetVersion *valueAsVersion;
@property (readonly) NSArray *valueAsTLVs;

+ (id)decomposeTLVs:(id)a0;
+ (id)findTLVWithType:(unsigned long long)a0 tlvs:(id)a1;
+ (id)findTLVsWithType:(unsigned long long)a0 tlvs:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 stringValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (id)generateTLV:(id *)a0;
- (id)initWithType:(unsigned long long)a0 dataValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 tagValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 tlvLength:(unsigned long long)a1 tlvValue:(void *)a2;
- (id)initWithType:(unsigned long long)a0 unsignedInt16:(unsigned short)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt32:(unsigned int)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt64:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt8:(unsigned char)a1;
- (id)initWithType:(unsigned long long)a0 urlValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 versionInfo:(struct uarpPayloadVersionInfo { struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x0; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; } *)a1;

@end
