@class TSUZipArchive, TSUZipEntry;

@interface TSUContainedZipArchive : TSUZipArchive {
    TSUZipArchive *_zipArchive;
    TSUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)a0 zipArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)archiveLength;
- (id)initWithEntry:(id)a0 zipArchive:(id)a1 options:(unsigned long long)a2;
- (id)newArchiveReadChannel;
- (id)readChannelForEntry:(id)a0 validateCRC:(BOOL)a1;
- (id)streamReadChannelForEntry:(id)a0 validateCRC:(BOOL)a1;

@end
