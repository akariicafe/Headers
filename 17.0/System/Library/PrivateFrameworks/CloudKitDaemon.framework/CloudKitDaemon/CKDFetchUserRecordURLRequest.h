@class CKRecord;

@interface CKDFetchUserRecordURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;

@end
