@class CKRecordID, NSString, NSURL, CKRoughlyEquivalentProperties;

@interface CKDDeclineShareMetadata : NSObject <CKRoughlyEquivalent>

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *participantID;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (void).cxx_destruct;

@end
