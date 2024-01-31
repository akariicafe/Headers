@class SSDownload, NSString, NSURL, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ISUDownload : NSObject {
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) SSDownload *managedDownload;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic, getter=isContentRestricted) BOOL contentRestricted;
@property (readonly, nonatomic) NSString *phaseIdentifier;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (readonly, nonatomic) NSNumber *storePreorderIdentifier;
@property (readonly, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long bytesDownloaded;
@property (readonly, nonatomic) long long bytesTotal;
@property (readonly, nonatomic) double estimatedSecondsRemaining;
@property (readonly, nonatomic, getter=isPurchase) BOOL purchase;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;

+ (void)initialize;
+ (id)downloadProperties;
+ (id)downloadExternalProperties;

- (void)dealloc;
- (id)copyLocalizedStatusString;
- (id)initWithManagedDownload:(id)a0;
- (void)resetPreorderState;

@end
