@interface NSNullFileHandle : NSFileHandle

- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)seekToFileOffset:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (int)fileDescriptor;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)synchronizeFile;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (id /* block */)writeabilityHandler;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)availableData;
- (id)readDataToEndOfFile;
- (void)closeFile;
- (id /* block */)readabilityHandler;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (unsigned long long)seekToEndOfFile;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (unsigned long long)offsetInFile;
- (BOOL)closeAndReturnError:(out id *)a0;

@end
