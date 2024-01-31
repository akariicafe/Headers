@interface PKZipArchiver : NSObject

- (void)unzipStream:(id)a0 toPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)unzipStream:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)zippedDataForURL:(id)a0;

@end
