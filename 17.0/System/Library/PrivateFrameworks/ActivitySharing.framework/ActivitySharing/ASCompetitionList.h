@class NSString, NSArray, NSUUID, ASCompetition, CKRecord, ASCodableCloudKitCompetitionList;

@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying>

@property (readonly, nonatomic) ASCodableCloudKitCompetitionList *codableCompetitionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *competitions;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSUUID *friendUUID;
@property (copy, nonatomic) CKRecord *systemFieldsOnlyRecord;
@property (readonly, nonatomic) ASCompetition *currentCompetition;

+ (id)competitionListFromCodableDatabaseCompetitionList:(id)a0 codableCompetitions:(id)a1 withType:(long long)a2;
+ (id)competitionListWithCodableCompetitionList:(id)a0;
+ (id)competitionListWithRecord:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)codableDatabaseCompetitionListEntryForOwner:(long long)a0;
- (id)initWithFriendUUID:(id)a0 type:(long long)a1;
- (id)recordWithZoneID:(id)a0;

@end
