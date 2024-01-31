@class NSUUID, NSMutableSet, NSMutableDictionary;

@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    BOOL _shouldTransform;
    NSUUID *_homeModelID;
}

- (id)description;
- (void).cxx_destruct;

@end
