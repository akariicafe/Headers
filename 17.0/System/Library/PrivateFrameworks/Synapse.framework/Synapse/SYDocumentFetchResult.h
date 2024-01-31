@class NSString, NSURL;

@interface SYDocumentFetchResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *documentId;
@property (readonly, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDocumentId:(id)a0 fileURL:(id)a1;

@end
