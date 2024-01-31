@class NSString, BMCache;
@protocol BMFileManagerDelegate;

@interface BMFileManager : NSObject <BMFileManagerImpl> {
    long long _cachingOptions;
    BMCache *_fileHandleCache;
}

@property (readonly, nonatomic) NSString *directory;
@property (weak, nonatomic) id<BMFileManagerDelegate> delegate;

+ (id)fileManagerWithDirectAccessToDirectory:(id)a0 cachingOptions:(long long)a1;
+ (id)bm_accountIds;
+ (id)globalWeakFileHandleCache;
+ (id)fileManagerWithMediatedAccessToDirectory:(id)a0 useCase:(id)a1 domain:(unsigned long long)a2 user:(unsigned int)a3;

- (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;
- (id)init;
- (BOOL)removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileExistsAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeFileAtPath:(id)a0 error:(id *)a1;
- (unsigned long long)modificationTimeOfFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)changePermissionsOfFileAtPath:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
- (unsigned long long)sizeOfFileAtPath:(id)a0 error:(id *)a1;
- (id)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)acquireLockfile:(id)a0 andRunBlock:(id /* block */)a1;
- (id)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)dataWithContentsOfFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)replaceFileAtPath:(id)a0 withData:(id)a1 protection:(int)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;

@end
