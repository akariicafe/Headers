@class CPLRecordChange, CPLScopedIdentifier;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheRecordView : CPLRecordView {
    CPLScopedIdentifier *_localScopedIdentifier;
}

@property (readonly, nonatomic) CPLScopedIdentifier *localScopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *cloudRecord;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

- (id)redactedDescription;
- (id)scopedIdentifier;
- (id)description;
- (void).cxx_destruct;
- (id)relation;
- (id)synthesizedRecord;
- (Class)recordClass;
- (id)initWithLocalScopedIdentifier:(id)a0 cloudRecord:(id)a1 idMapping:(id)a2;
- (id)recordChangeData;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)sharingRecordChangeData;

@end
