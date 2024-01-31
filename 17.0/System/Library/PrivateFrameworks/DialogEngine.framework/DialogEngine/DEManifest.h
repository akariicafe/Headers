@class NSString, NSDictionary, NSData, NSURL;

@interface DEManifest : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *contents;
@property (retain, nonatomic) NSData *summary;
@property (retain, nonatomic) NSData *version;
@property (retain, nonatomic) NSData *keyVersion;
@property (nonatomic) unsigned long long dirDownloadType;
@property (retain, nonatomic) NSURL *publicationURL;
@property (retain, nonatomic) NSURL *downloadURLPrefix;
@property (nonatomic) BOOL testOnly;

+ (id)anyManifestWithContentsOfURL:(id)a0 encrypted:(BOOL)a1;
+ (id)anyManifestWithContentsOfURL:(id)a0 wasEncrypted:(BOOL *)a1;
+ (id)manifestWithContentsOfURL:(id)a0;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(BOOL)a1;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(BOOL)a1 allowAllKeys:(BOOL)a2 filter:(id)a3;
+ (id)manifestWithContentsOfURL:(id)a0 encrypted:(BOOL)a1 filter:(id)a2;
+ (id)manifestWithContentsOfURL:(id)a0 wasEncrypted:(BOOL *)a1 allowAllKeys:(BOOL)a2 filter:(id)a3;
+ (id)manifestWithContentsOfURL:(id)a0 wasEncrypted:(BOOL *)a1 filter:(id)a2;

- (BOOL)writeToURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 contents:(id)a1 summary:(id)a2 dirDownloadType:(unsigned long long)a3;
- (id)initWithName:(id)a0 contents:(id)a1 summary:(id)a2 dirDownloadType:(unsigned long long)a3 version:(id)a4 keyVersion:(id)a5;
- (BOOL)writeToURL:(id)a0 keyId:(unsigned long long)a1 privateKey:(id)a2;

@end
