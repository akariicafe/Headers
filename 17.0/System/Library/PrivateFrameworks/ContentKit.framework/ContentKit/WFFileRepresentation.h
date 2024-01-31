@class NSString, WFFileType, NSURL, NSDate, NSData;

@interface WFFileRepresentation : WFRepresentation

@property (retain, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFFileType *wfType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) long long representationType;
@property (readonly, nonatomic) BOOL deletesFileOnDeallocation;
@property (readonly, nonatomic) BOOL securityScopedResource;
@property (readonly, nonatomic) BOOL isTemporaryFile;

+ (BOOL)supportsSecureCoding;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1;
+ (void)addDisallowedDirectory:(id)a0;
+ (id)fileWithURL:(id)a0 options:(long long)a1;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3;
+ (BOOL)coordinateFileOperation:(unsigned long long)a0 shouldCoordinate:(BOOL)a1 fileURL:(id)a2 destinationURL:(id)a3 accessor:(id /* block */)a4;
+ (id)disallowedDirectoryURLs;
+ (BOOL)fileIsInDisallowedDirectory:(id)a0;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
+ (BOOL)isAllowedToRepresentFileURL:(id)a0;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1 unsanitizedName:(id *)a2;
+ (BOOL)sandboxAllowsRepresentingFileURL:(id)a0;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1 unsanitizedName:(id *)a2;
+ (id)typeOfData:(id)a0;
+ (id)typeOfFile:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)inputStream;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEncodable;
- (id)mappedDataWithError:(id *)a0;
- (BOOL)writeToFileURL:(id)a0 overwriting:(BOOL)a1 error:(id *)a2;
- (id)copyWithName:(id)a0 addingExtensionIfNecessary:(BOOL)a1 zone:(struct _NSZone { } *)a2;
- (id)mappedData;
- (BOOL)atomicReplaceAcrossVolumesIfNeededWithURLForReplacing:(id)a0 sourceURL:(id)a1 error:(id *)a2;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)initWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
- (id)initWithFileURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
- (id)typeForUserEnteredName:(id)a0 addingExtensionIfNecessary:(BOOL)a1;
- (id)updatedFilenameForUserEnteredName:(id)a0 addingExtensionIfNecessary:(BOOL)a1;
- (BOOL)writeToFileURL:(id)a0 copy:(BOOL)a1 overwrite:(BOOL)a2 error:(id *)a3;
- (BOOL)writeToTemporaryFileURL:(id)a0 error:(id *)a1;

@end
