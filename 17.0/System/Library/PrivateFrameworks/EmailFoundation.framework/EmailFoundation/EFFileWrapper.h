@class EFPathComponent;

@interface EFFileWrapper : NSFileWrapper

@property (retain, nonatomic) EFPathComponent *preferredFilenamePathComponent;
@property (retain, nonatomic) EFPathComponent *filenamePathComponent;

- (id)filename;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)setFilename:(id)a0;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)a0;

@end
