@class NSString, MPStoreDownload;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver>

@property (copy, nonatomic) id /* block */ didFinishDownloadHandler;
@property (copy, nonatomic) id /* block */ didFinishPurchaseHandler;
@property (readonly, nonatomic) MPStoreDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
