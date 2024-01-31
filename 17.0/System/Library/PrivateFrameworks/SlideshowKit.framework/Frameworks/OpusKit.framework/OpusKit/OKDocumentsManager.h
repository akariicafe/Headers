@class NSObject;
@protocol OS_dispatch_queue;

@interface OKDocumentsManager : NSObject {
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performAsynchronousFileAccessUsingBlock:(id /* block */)a0;
- (id)documentsDirectoryURL;
- (id)uniqueFileURLForFileName:(id)a0 error:(id *)a1;
- (id)renameFileURL:(id)a0 toFileName:(id)a1 error:(id *)a2;
- (void)_performAsynchronousFileAccessUsingBlock:(id /* block */)a0;
- (BOOL)deleteFileURL:(id)a0 error:(id *)a1;
- (id)documentURLs:(id *)a0;
- (id)documentURLsAtDirectoryURL:(id)a0 error:(id *)a1;
- (id)duplicateFileURL:(id)a0 error:(id *)a1;
- (id)duplicateFileURL:(id)a0 toDirectoryURL:(id)a1 error:(id *)a2;
- (id)importFileURL:(id)a0 error:(id *)a1;
- (id)importFileURL:(id)a0 toDirectoryURL:(id)a1 copy:(BOOL)a2 error:(id *)a3;
- (id)importFileURL:(id)a0 toDirectoryURL:(id)a1 error:(id *)a2;
- (id)localDocumentsDirectoryURL;
- (id)uniqueFileURLForFileName:(id)a0 inDirectoryURL:(id)a1 error:(id *)a2;

@end
