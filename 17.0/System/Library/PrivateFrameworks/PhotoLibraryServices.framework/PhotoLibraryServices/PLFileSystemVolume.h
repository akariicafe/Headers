@class NSString, NSURL, NSSet;

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)entityName;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)predictedURLForVolumeName:(id)a0;

- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (void)awakeFromFetch;
- (void)_registerWithVolumeManager;
- (id)predictedURL;
- (void)didTurnIntoFault;
- (void)unregisterWithVolumeManager;
- (BOOL)supportsCloudUpload;
- (void)willTurnIntoFault;
- (void).cxx_destruct;
- (void)_unregisterWithVolumeManager;

@end
