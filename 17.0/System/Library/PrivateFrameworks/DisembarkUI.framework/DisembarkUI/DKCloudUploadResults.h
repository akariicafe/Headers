@class NSArray, DKCloudUploadResult;

@interface DKCloudUploadResults : NSObject

@property (retain, nonatomic) NSArray *backupResults;
@property (retain, nonatomic) DKCloudUploadResult *syncResult;

- (BOOL)success;
- (void).cxx_destruct;

@end
