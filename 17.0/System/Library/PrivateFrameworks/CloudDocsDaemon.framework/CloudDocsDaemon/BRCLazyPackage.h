@class NSString, BRCStageRegistry, CKPackage;

@interface BRCLazyPackage : NSObject {
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
}

- (unsigned long long)itemCount;
- (void).cxx_destruct;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (id)closeAndReturn;
- (id)initWithRegistry:(id)a0 stageID:(id)a1 name:(id)a2;

@end
