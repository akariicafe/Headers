@class NSMutableDictionary, NSHashTable;

@interface WFRemoteExecutionFileCoordinator : NSObject

@property (retain, nonatomic) NSMutableDictionary *waitingFiles;
@property (retain, nonatomic) NSHashTable *waitingArchivers;

- (id)init;
- (void).cxx_destruct;
- (void)handleFile:(id)a0 withIdentifier:(id)a1;
- (void)registerArchiver:(id)a0;

@end
