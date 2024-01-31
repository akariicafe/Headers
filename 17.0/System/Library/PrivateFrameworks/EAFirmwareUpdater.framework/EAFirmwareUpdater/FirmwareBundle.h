@class NSString, NSDictionary, NSData, NSURL, NSFileHandle;

@interface FirmwareBundle : NSObject {
    NSString *_bundleDescription;
    NSFileHandle *_firmwareFilehandle;
}

@property (readonly) NSData *hash;
@property (readonly) NSData *firmwareImage;
@property (readonly) NSURL *firmwareLocalURL;
@property (readonly) NSData *signature;
@property (readonly) NSData *certificate;
@property unsigned int productIDCode;
@property (readonly) unsigned int firmwareImageBaseAddress;
@property (readonly) unsigned int firmwareImageSize;
@property (retain, nonatomic) NSDictionary *buildManifest;

+ (id)defaultBundlePath;

- (id)initWithBundle:(id)a0;
- (void)dealloc;
- (id)initWithBundlePath:(id)a0;
- (id)description;
- (void)calculateHash;
- (id)getFirmwareDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithBundleName:(id)a0;
- (id)initWithData:(id)a0 hashData:(id)a1 signatureData:(id)a2 certData:(id)a3;
- (id)initWithURL:(id)a0 hashData:(id)a1 signatureData:(id)a2 certData:(id)a3;
- (void)loadFirmwareImage;
- (void)parseFileName:(id)a0 intoPath:(id *)a1 andExtension:(id *)a2;
- (id)parseMSP430TXTFile:(id)a0 withDefaultByteValue:(unsigned char)a1;
- (id)parseResourceFileIntoData:(id)a0;
- (id)parseSRECFile:(id)a0 withDefaultByteValue:(unsigned char)a1;
- (void)parseSRECLine:(id)a0 intoImage:(id)a1;

@end
