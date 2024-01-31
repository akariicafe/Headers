@class CPLRecordChange, CPLScopedIdentifier, NSData, CPLPlaceholderRecord;

@interface CPLRecordView : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *synthesizedRecord;
@property (readonly, nonatomic) CPLPlaceholderRecord *placeholderRecord;
@property (readonly, nonatomic) NSData *recordChangeData;
@property (readonly, nonatomic) NSData *sharingRecordChangeData;

- (id)redactedDescription;
- (id)description;
- (id)relation;
- (BOOL)supportsResources;
- (Class)recordClass;
- (id)changeForType:(unsigned long long)a0;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 changeType:(unsigned long long)a3 diffTracker:(id)a4;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 diffTracker:(id)a3;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;

@end
