@class NSArray, NSString, CKRecordZoneID, CKDatabase;

@interface FCHCZoneContentsExpectation : NSObject <FCHCExpectation>

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSArray *recordTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validate;
- (void).cxx_destruct;

@end
