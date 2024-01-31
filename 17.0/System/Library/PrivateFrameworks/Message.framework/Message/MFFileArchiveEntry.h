@class NSString, NSData;

@interface MFFileArchiveEntry : NSObject

@property (retain) NSString *path;
@property long long uncompressedSize;
@property struct _NSRange { unsigned long long location; unsigned long long length; } compressedRange;
@property BOOL isDeflated;
@property BOOL isDirectory;
@property (retain) NSData *contents;

+ (id)archiveEntry;
+ (id)archiveEntryWithCentralHeader:(struct CentralHeader { unsigned char x0[4]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned int x16; unsigned int x17; char *x18; } *)a0 archiveData:(id)a1;

- (id)initWithDirectoryPath:(id)a0;
- (id)fileName;
- (id)description;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (long long)compressedSize;
- (id)initWithContents:(id)a0 path:(id)a1;

@end
