@class NSSet, NSDictionary, NSData, NSMutableDictionary;

@interface WBSCloudHistoryFetchResult : NSObject {
    NSMutableDictionary *_mutableVisitsPerProfile;
    NSMutableDictionary *_mutableTombstonesPerProfile;
    NSMutableDictionary *_mutableClientVersions;
}

@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) unsigned long long tombstoneCount;
@property (readonly, nonatomic) NSDictionary *clientVersions;
@property (readonly, nonatomic) NSData *serverChangeTokenData;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_addCloudHistoryVisit:(id)a0 profileServerIdentifier:(id)a1;
- (void)_addTombstone:(id)a0 profileServerIdentifier:(id)a1;
- (id)_dictionaryForRecordData:(id)a0;
- (void)_setServerChangeTokenData:(id)a0;
- (void)_updateClientVersion:(unsigned long long)a0 seenAt:(id)a1;
- (void)appendRecord:(id)a0 usingConfiguration:(id)a1;
- (void)clearRecordsForProfileWithServerIdentifier:(id)a0;
- (id)tombstonesForProfileWithServerIdentifier:(id)a0;
- (id)visitsForProfileWithServerIdentifier:(id)a0;

@end
