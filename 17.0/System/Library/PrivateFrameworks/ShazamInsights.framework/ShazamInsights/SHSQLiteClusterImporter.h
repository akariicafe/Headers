@class NSString;

@interface SHSQLiteClusterImporter : NSObject <SHClusterImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadDataFromFileInfo:(id)a0 withMetadata:(id)a1 toDestinationURL:(id)a2 error:(id *)a3;

@end
