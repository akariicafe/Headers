@interface CKContextContentProvider : NSObject

+ (unsigned char)controlCodeForExecutor:(id)a0;
+ (void)extractContentFromWebViewPDFData:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)handlePDFView:(id)a0 withExecutor:(id)a1;

- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;
- (void)extractUsingExecutor:(id)a0;
- (double)timeout;

@end
