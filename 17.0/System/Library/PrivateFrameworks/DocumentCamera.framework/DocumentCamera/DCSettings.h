@class NSUserDefaults;

@interface DCSettings : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL enableViewService;
@property (readonly, nonatomic) BOOL finishAfterFirstScan;
@property (readonly, nonatomic) BOOL useDocumentSegmentationRequest;
@property (readonly, nonatomic) double imageQuality;

+ (id)sharedSettings;

- (id)init;
- (void).cxx_destruct;
- (id)enableViewServiceBoxed;
- (id)finishAfterFirstScanBoxed;
- (id)imageQualityBoxed;
- (void)setEnableViewServiceBoxed:(id)a0;
- (void)setFinishAfterFirstScanBoxed:(id)a0;
- (void)setImageQualityBoxed:(id)a0;
- (void)setUseDocumentSegmentationRequestBoxed:(id)a0;
- (id)useDocumentSegmentationRequestBoxed;

@end
