@class DNDSModeConfigurationsRecord, NSArray, CKRecordZone;

@interface DNDSModeConfigurationsRecordDiff : NSObject

@property (readonly, copy, nonatomic) DNDSModeConfigurationsRecord *original;
@property (readonly, copy, nonatomic) DNDSModeConfigurationsRecord *updated;
@property (readonly, copy, nonatomic) NSArray *modifiedIDs;
@property (readonly, copy, nonatomic) NSArray *removedIDs;
@property (readonly, copy, nonatomic) CKRecordZone *zone;

- (void).cxx_destruct;
- (id)_recordIDsInModeConfigurations:(id)a0;
- (void)_generateDiff;
- (id)_modifiedConfigurations;
- (id)_removedConfigurations;
- (id)initWithOriginalModeConfigurations:(id)a0 updatedModeConfigurations:(id)a1 zone:(id)a2;

@end
