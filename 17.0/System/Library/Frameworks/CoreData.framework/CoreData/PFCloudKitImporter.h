@class NSArray, CKServerChangeToken, NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions, NSMutableArray;

@interface PFCloudKitImporter : NSObject {
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    unsigned long long _totalImportedBytes;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0 request:(id)a1;

@end
