@class NSArray, NSDictionary, ASTUploadFilesResult, NSNumber;

@interface ASTTestResult : ASTSealablePayload

@property (retain, nonatomic) NSDictionary *predicates;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSNumber *testId;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;
@property (retain, nonatomic) ASTUploadFilesResult *uploadFiles;
@property (nonatomic) double testDuration;
@property (retain, nonatomic) NSNumber *allowCellularSizeThreshold;

+ (id)resultWithTestId:(id)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)generatePayload;
- (id)initWithTestId:(id)a0 parameters:(id)a1;
- (BOOL)sealWithFileSigner:(id /* block */)a0 error:(id *)a1;
- (void)sealWithPayload:(id)a0 signature:(id)a1;
- (void)sealWithSealableFiles:(id)a0;
- (void)setUploadStatusFromSource:(id)a0 withArray:(id)a1;

@end
