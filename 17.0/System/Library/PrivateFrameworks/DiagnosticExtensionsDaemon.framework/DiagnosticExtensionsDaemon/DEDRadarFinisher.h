@class NSURLSession, NSString, DEDBugSessionConfiguration, DEDBugSession, NSObject, NSMutableSet;
@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDBugSession *session;
@property (weak) DEDBugSessionConfiguration *configuration;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property int retryAttemptCount;
@property (retain) NSMutableSet *uploadItems;
@property (retain) NSURLSession *urlSession;
@property (retain) NSMutableSet *verificationTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)initWithCoder:(id)a0;
- (id)getVerificationTaskForDataTask:(id)a0;
- (BOOL)allUploadsComplete;
- (BOOL)allVerificationTasksComplete;
- (id)createUploadTaskForAttachment:(id)a0 atRadarURL:(id)a1;
- (void)finishRadarUploadSession;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (id)folderNameForAttachmentGroup:(id)a0;
- (id)getUploadItemForTask:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)processVerifyTaskResults;
- (void)startAttachmentVerificationTasks;

@end
