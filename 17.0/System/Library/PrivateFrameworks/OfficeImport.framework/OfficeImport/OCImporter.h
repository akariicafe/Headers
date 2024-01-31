@class NSString, OITSUProgressContext, NSURL, NSData, OCDReader;

@interface OCImporter : OCMapper {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    BOOL mTryAlternateReader;
}

@property (retain) OITSUProgressContext *progressContext;
@property (copy, nonatomic) NSString *lastPasswordAttempted;
@property (copy, nonatomic) id /* block */ officeDOMInspector;

+ (void)initialize;
+ (BOOL)URLIsXML:(id)a0;
+ (Class)binaryReaderClass;
+ (Class)readerClassForURL:(id)a0;
+ (id)xmlPathExtensions;
+ (Class)xmlReaderClass;

- (id)filename;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (BOOL)start;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (void)setURL:(id)a0;
- (id)url;
- (BOOL)setPassphrase:(id)a0;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)a0 errorMessage:(id *)a1;
- (void)finalizeWithDocumentState:(id)a0;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)a0 errorMessage:(id *)a1 readError:(BOOL *)a2;
- (BOOL)isXML;
- (Class)readerClass;
- (BOOL)tryAlternateReader;

@end
