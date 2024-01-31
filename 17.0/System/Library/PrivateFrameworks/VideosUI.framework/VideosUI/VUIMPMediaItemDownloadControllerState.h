@class NSError;

@interface VUIMPMediaItemDownloadControllerState : NSObject <NSCopying>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;
@property (nonatomic) BOOL downloadSucceeded;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
