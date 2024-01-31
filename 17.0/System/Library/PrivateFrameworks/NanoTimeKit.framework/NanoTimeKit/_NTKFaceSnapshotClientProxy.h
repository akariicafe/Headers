@protocol NTKFaceSnapshotClient;

@interface _NTKFaceSnapshotClientProxy : NSObject {
    id<NTKFaceSnapshotClient> _proxy;
}

- (void).cxx_destruct;
- (id)initWithWeakProxy:(id)a0;
- (void)faceSnapshotChangedForKey:(id)a0;

@end
