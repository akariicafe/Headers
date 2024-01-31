@interface DocumentUnderstanding.FilesDocumentIngester : NSObject

+ (id)getEffectiveFileExtensionForURLWithFileURL:(id)a0;
+ (id)ingestDocumentFromFileWithFileURL:(id)a0;
+ (id)openiWorkFileWithFileURL:(id)a0;
+ (id)readFromJsonWithFileURL:(id)a0;
+ (id)readFromOfficeWithFileURL:(id)a0;
+ (id)readFromPDFWithFileURL:(id)a0;
+ (id)readFromTextWithFileURL:(id)a0;
+ (id)readFromiWorkWithFileURL:(id)a0;

- (id)init;

@end
