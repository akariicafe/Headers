@class ICRequestContext, NSString, ICStoreMediaResponseItem, NSData, NSDictionary;

@interface ATStoreDownloadOperationResult : NSObject

@property (nonatomic) BOOL cancelAllRemaining;
@property (copy, nonatomic) NSString *downloadFilePath;
@property (copy, nonatomic) NSData *resumeData;
@property (copy, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem;
@property (copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) BOOL isHLSDownload;
@property (copy, nonatomic) NSDictionary *assetClientParams;

- (id)description;
- (void).cxx_destruct;

@end
