@protocol MTLegacyDownloadManagerDelegate;

@interface MTLegacyDownloadListener : NSObject

@property (readonly, weak, nonatomic) id<MTLegacyDownloadManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
