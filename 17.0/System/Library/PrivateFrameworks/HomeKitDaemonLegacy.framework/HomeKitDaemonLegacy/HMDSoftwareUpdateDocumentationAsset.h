@class NSUUID, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSURL, NSDate, NSString, NSArray, NSInputStream, NSObject, NSNotificationCenter;
@protocol HMSoftwareUpdateUrlSession, HMSoftwareUpdateDocumentationAssetExtractor, OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, HMSoftwareUpdateUrlSessionDelegate, HMSoftwareUpdateDocumentationAssetExtractorDelegate, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSURL *assetDirectoryURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<HMSoftwareUpdateUrlSession> URLSession;
@property (readonly) id /* block */ URLSessionFactory;
@property (retain, nonatomic) id<HMSoftwareUpdateDocumentationAssetExtractor> extractor;
@property (readonly) id /* block */ extractorFactory;
@property (retain, nonatomic) NSInputStream *archivedFileStream;
@property BOOL shouldAutomaticallyCache;
@property unsigned long long downloadRetryCount;
@property (copy) NSDate *nextPermittedDownloadDate;
@property (readonly) id /* block */ dateWithTimeIntervalSinceNowFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly) long long state;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)assetWithURL:(id)a0;

- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)saveWithError:(id *)a0;
- (id)metadataURL;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancelDownload;
- (id)logIdentifier;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archiveURL;
- (void)finishUnarchive;
- (void)finishDownload;
- (id)initWithDocumentationMetadata:(id)a0;
- (void)setExtractionProgress:(double)a0;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (BOOL)purgeWithError:(id *)a0;
- (void)cancelUnarchive;
- (void)increaseDownloadRetryCount;
- (id)initWithDocumentationMetadata:(id)a0 dateWithTimeIntervalSinceNowFactory:(id /* block */)a1 URLSessionFactory:(id /* block */)a2 extractorFactory:(id /* block */)a3 notificationCenter:(id)a4;
- (BOOL)isDownloadPermitted;
- (void)resetDownloadRetryCount;

@end
