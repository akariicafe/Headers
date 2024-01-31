@class NSMutableDictionary, NSDictionary, NSData, ENArchive, NSMutableData, ENProtobufCoder;

@interface ENFile : NSObject {
    ENArchive *_archive;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fileHandle;
    unsigned long long _keyIndex;
    BOOL _reading;
    unsigned int _metadataFlags;
    NSMutableDictionary *_mutableMetadata;
    NSMutableData *_outputData;
    ENProtobufCoder *_protobufCoder;
    ENProtobufCoder *_tekProtobufCoder;
}

@property (copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSData *sha256Data;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)closeAndReturnError:(id *)a0;
- (BOOL)openWithArchive:(id)a0 error:(id *)a1;
- (BOOL)openWithFD:(int)a0 reading:(BOOL)a1 error:(id *)a2;
- (id)readTEKAndReturnError:(id *)a0;
- (BOOL)_readMetadataFromArchive:(id)a0 error:(id *)a1;
- (BOOL)writeTEK:(id)a0 error:(id *)a1;
- (BOOL)_readHashFromArchive:(id)a0 error:(id *)a1;
- (BOOL)_readHashFromFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 error:(id *)a1;
- (BOOL)_readHeaderFromFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 error:(id *)a1;
- (id)_readKeyWithPtr:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_readMetadataFromCoder:(id)a0 error:(id *)a1;
- (BOOL)_readMetadataFromFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 error:(id *)a1;
- (BOOL)_readPrepareAndReturnError:(id *)a0;
- (BOOL)_resetAndReadHeaderFromArchive:(id)a0 error:(id *)a1;
- (BOOL)_writeMetadataAndReturnError:(id *)a0;
- (BOOL)_writePrepareAndReturnError:(id *)a0;
- (BOOL)openForWritingToData:(id)a0 error:(id *)a1;
- (BOOL)openWithFileSystemRepresentation:(const char *)a0 reading:(BOOL)a1 error:(id *)a2;
- (id)readTEKWithFlags:(unsigned int)a0 error:(id *)a1;
- (BOOL)writeTEK:(id)a0 flags:(unsigned int)a1 error:(id *)a2;

@end
