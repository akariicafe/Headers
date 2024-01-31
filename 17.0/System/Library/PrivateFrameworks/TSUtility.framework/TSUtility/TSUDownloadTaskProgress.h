@interface TSUDownloadTaskProgress : NSObject

@property (nonatomic) BOOL isActive;
@property (nonatomic) long long totalBytesDownloaded;
@property (nonatomic) long long totalBytesExpectedToBeDownloaded;

- (id)description;

@end
