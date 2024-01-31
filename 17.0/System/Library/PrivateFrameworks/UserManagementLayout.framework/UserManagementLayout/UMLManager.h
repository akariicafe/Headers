@class UMLUserManifest, UMLSideEffects;

@interface UMLManager : NSObject {
    UMLSideEffects *_se;
    UMLUserManifest *_manifest;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)addNewUser:(id)a0 toUserManifest:(id)a1 saveToPath:(id)a2;
- (BOOL)createPrimaryUserLayoutWithOnUserVolumePath:(id)a0 fromSystemVolumePath:(id)a1 withError:(id *)a2;
- (id)createPrimaryUserOnSharedDataVolumePath:(id)a0 withError:(id *)a1;
- (BOOL)createUserLayoutForUserwithUserID:(int)a0 withAKSSetup:(BOOL)a1 onUserVolumePath:(id)a2 fromSystemVolumePath:(id)a3 withError:(id *)a4;
- (id)loadManifestFromSharedDataVolumePath:(id)a0;
- (id)readUserManifestOnSharedDataVolumePath:(id)a0 withError:(id *)a1;
- (BOOL)removeAnUser:(id)a0 fromUserManifest:(id)a1 saveToPath:(id)a2;
- (BOOL)saveManifest:(id)a0 toPath:(id)a1;
- (BOOL)updatePrimaryUser:(id)a0 onSharedDataVolumePath:(id)a1 withDiskNode:(id)a2 withVolumeuuid:(id)a3 withVolumeName:(id)a4 withError:(id *)a5;
- (BOOL)updateUser:(id)a0 inManifest:(id)a1 withDiskNode:(id)a2 volumeUUID:(id)a3 volumeName:(id)a4 withSharedDataVolumePath:(id)a5 withError:(id *)a6;

@end
