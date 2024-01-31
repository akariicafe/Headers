@class NSString;

@interface PLPTPAnalyticsData : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *vendor;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *platformVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *transport;
@property (nonatomic) long long cplState;
@property (nonatomic) unsigned long long libraryAssetCount;
@property (nonatomic) unsigned long long videoTranscodedCount;
@property (nonatomic) unsigned long long imageTranscodedCount;
@property (nonatomic) unsigned long long downloadedCount;
@property (nonatomic) unsigned long long deferredRenderCount;
@property (nonatomic) double timeConnected;
@property (nonatomic) double timeDisconnected;

- (id)init;
- (void)report;
- (id)description;
- (void).cxx_destruct;
- (id)cplStateString;
- (void)incrementConversionCountForAssetType:(short)a0;
- (void)updateWithPlatformInformation:(id)a0;

@end
