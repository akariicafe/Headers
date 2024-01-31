@class NSString;

@interface UMFilesystemProvider : NSObject <UMFilesystemProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1;
- (long long)sizeOfFileWithDescriptor:(int)a0 error:(id *)a1;
- (BOOL)clonePath:(id)a0 toPath:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (BOOL)atomicallyWriteData:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)chmodPath:(id)a0 withMode:(unsigned short)a1 error:(id *)a2;
- (BOOL)chownPath:(id)a0 toUser:(unsigned int)a1 group:(unsigned int)a2 error:(id *)a3;
- (void)closeFileWithDescriptor:(int)a0;
- (id)dataWithContentsOfFile:(id)a0 error:(id *)a1;
- (BOOL)makePath:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
- (int)openFileForAppendingAtPath:(id)a0 error:(id *)a1;
- (BOOL)removePath:(id)a0 error:(id *)a1;
- (BOOL)renameFileFromPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)writeToFileWithDescriptor:(int)a0 string:(id)a1 error:(id *)a2;

@end
