@class NSNumber;

@interface MTROtaSoftwareUpdateRequestorClusterDownloadErrorEvent : MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *bytesDownloaded;
@property (copy, nonatomic) NSNumber *progressPercent;
@property (copy, nonatomic) NSNumber *platformCode;

@end
