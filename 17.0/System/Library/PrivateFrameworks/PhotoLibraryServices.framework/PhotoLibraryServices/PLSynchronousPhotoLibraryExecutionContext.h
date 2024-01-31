@class NSString;

@interface PLSynchronousPhotoLibraryExecutionContext : NSObject <PLPhotoLibraryExecutionContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performTransactionOnLibrary:(id)a0 transaction:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
