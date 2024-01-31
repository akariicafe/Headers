@class NSMutableDictionary, NSURL, NSURLSessionUploadTask, NSObject;

@interface ASTUploadItem : NSObject

@property (retain) NSURL *destinationUrl;
@property (retain) NSObject *dataObject;
@property BOOL isComplete;
@property BOOL isFailed;
@property (retain) NSMutableDictionary *metaInfo;
@property (weak) NSURLSessionUploadTask *task;

- (void).cxx_destruct;
- (id)initWithDestinationUrl:(id)a0 andSourceData:(id)a1 andTask:(id)a2;
- (id)initWithDestinationUrl:(id)a0 andSourceUrl:(id)a1 andTask:(id)a2;

@end
