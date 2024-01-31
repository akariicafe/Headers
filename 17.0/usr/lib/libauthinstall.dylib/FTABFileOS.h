@class NSFileHandle, NSArray, NSMutableData, NSURL, NSData, NSMutableArray, FTABSubfileOS;

@interface FTABFileOS : NSObject <NSCopying> {
    NSData *_fileData;
    NSMutableArray *_subFileArray;
    NSFileHandle *_fileHandleWriteDestination;
    NSMutableData *_dataWriteDestination;
}

@property (readonly) const char *filePointer;
@property (readonly) unsigned long long fileLength;
@property (readonly) NSURL *url;
@property (readonly) unsigned int generation;
@property (readonly) unsigned int valid;
@property (readonly) NSData *bootNonce;
@property (readonly) NSData *magic;
@property (readonly) FTABSubfileOS *manifest;
@property (readonly) NSArray *subfiles;

- (BOOL)writeToURL:(id)a0;
- (id)init;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setManifest:(id)a0;
- (id)subfileWithTag:(id)a0;
- (BOOL)addSubfileWithTagName:(id)a0 contentsOfURL:(id)a1;
- (BOOL)addSubfileWithTagName:(id)a0 subfileData:(id)a1;
- (void)addSubfiles:(id)a0;
- (void)configureDataWriteDestination;
- (BOOL)configureFileHandleWriteDestinationForURL:(id)a0;
- (id)createFileHandleForWritingToURL:(id)a0;
- (BOOL)fileValidForOffset:(unsigned int)a0 length:(unsigned int)a1;
- (BOOL)initFile;
- (BOOL)parseFileData;
- (void)removeSubfileWithTag:(id)a0;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1 handle:(id)a2;
- (BOOL)writeSubfileToURL:(id)a0 tag:(id)a1;
- (id)writeToData;
- (BOOL)writeToDestination;

@end
