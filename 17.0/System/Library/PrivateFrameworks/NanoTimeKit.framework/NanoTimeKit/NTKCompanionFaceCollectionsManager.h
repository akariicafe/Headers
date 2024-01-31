@class NSUUID, NSMutableDictionary;

@interface NTKCompanionFaceCollectionsManager : NSObject {
    NSUUID *_activeDeviceUUID;
    NSMutableDictionary *_faceCollectionsForCollectionIdentifier;
    int _pairedDeviceVersionChangeNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sharedFaceCollectionForDevice:(id)a0 forCollectionIdentifier:(id)a1;
- (id)sharedLibraryFaceCollectionsForAllDevices;

@end
