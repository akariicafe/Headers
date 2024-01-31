@class WLFeaturePayload, NSString, WLPhotoLibrary;

@interface WLPhotosMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource> {
    unsigned long long _importErrorCount;
    WLPhotoLibrary *_photoLibrary;
}

@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (void)enable;
- (id)dataType;
- (id)contentType;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)importErrorCount;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)importWillBegin;
- (BOOL)accountBased;
- (id)importDidEnd;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
