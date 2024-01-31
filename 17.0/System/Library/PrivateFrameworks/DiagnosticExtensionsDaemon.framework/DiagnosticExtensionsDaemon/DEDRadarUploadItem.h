@class NSString, NSURL;

@interface DEDRadarUploadItem : DEDAttachmentItem

@property (nonatomic) unsigned long long taskIdentifier;
@property (nonatomic) long long totalBytesSent;
@property (nonatomic) long long totalBytesExpectedToSend;
@property (nonatomic) BOOL isUploaded;
@property (retain, nonatomic) NSString *radarAttachmentName;
@property (retain, nonatomic) NSURL *radarURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUploadTask:(id)a0 andAttachment:(id)a1;

@end
