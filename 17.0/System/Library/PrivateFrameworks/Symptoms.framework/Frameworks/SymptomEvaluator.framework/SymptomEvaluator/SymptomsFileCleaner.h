@class NSArray, NetDiagnosticsShim, NSString, NSObject;
@protocol OS_dispatch_queue, SymptomsFileCleanerDelegate;

@interface SymptomsFileCleaner : NSObject <NetDiagnosticsShimDelegate>

@property (retain) NetDiagnosticsShim *netDiags;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSArray *filesToDelete;
@property (retain) id<SymptomsFileCleanerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
