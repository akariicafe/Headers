@interface TSPDirectoryPackageConverter : TSPPackageConverter

- (BOOL)isValid;
- (BOOL)enumeratePackageEntriesWithZipArchive:(id)a0 needsReadChannel:(BOOL)a1 accessor:(id /* block */)a2;
- (BOOL)performAccessor:(id /* block */)a0 filePathCharacterIndex:(unsigned long long)a1 fileURL:(id)a2 needsReadChannel:(BOOL)a3 zipArchive:(id)a4 error:(id *)a5;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)a0;

@end
