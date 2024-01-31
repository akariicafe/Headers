@class NSString, NSDateInterval, NSArray, AFAudioSessionCoordinationSnapshot, AFAudioSessionCoordinationDeviceInfo;

@interface _AFAudioSessionCoordinationSnapshotMutation : NSObject <AFAudioSessionCoordinationSnapshotMutating> {
    AFAudioSessionCoordinationSnapshot *_base;
    NSDateInterval *_currentOrUpNextDateInterval;
    BOOL _isAudioSessionActive;
    NSArray *_localActiveAssertionContexts;
    NSArray *_localPendingAssertionContexts;
    NSArray *_remoteActiveAssertionContexts;
    NSArray *_remotePendingAssertionContexts;
    AFAudioSessionCoordinationDeviceInfo *_localDevice;
    NSArray *_remoteQualifiedInRangeDevices;
    NSArray *_remoteQualifiedOutOfRangeDevices;
    NSArray *_remoteDisqualifiedDevices;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCurrentOrUpNextDateInterval : 1; unsigned char hasIsAudioSessionActive : 1; unsigned char hasLocalActiveAssertionContexts : 1; unsigned char hasLocalPendingAssertionContexts : 1; unsigned char hasRemoteActiveAssertionContexts : 1; unsigned char hasRemotePendingAssertionContexts : 1; unsigned char hasLocalDevice : 1; unsigned char hasRemoteQualifiedInRangeDevices : 1; unsigned char hasRemoteQualifiedOutOfRangeDevices : 1; unsigned char hasRemoteDisqualifiedDevices : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setLocalDevice:(id)a0;
- (id)getLocalActiveAssertionContexts;
- (void)setCurrentOrUpNextDateInterval:(id)a0;
- (id)getCurrentOrUpNextDateInterval;
- (BOOL)getIsAudioSessionActive;
- (id)getLocalDevice;
- (id)getLocalPendingAssertionContexts;
- (id)getRemoteActiveAssertionContexts;
- (id)getRemoteDisqualifiedDevices;
- (id)getRemotePendingAssertionContexts;
- (id)getRemoteQualifiedInRangeDevices;
- (id)getRemoteQualifiedOutOfRangeDevices;
- (void)setIsAudioSessionActive:(BOOL)a0;
- (void)setLocalActiveAssertionContexts:(id)a0;
- (void)setLocalPendingAssertionContexts:(id)a0;
- (void)setRemoteActiveAssertionContexts:(id)a0;
- (void)setRemoteDisqualifiedDevices:(id)a0;
- (void)setRemotePendingAssertionContexts:(id)a0;
- (void)setRemoteQualifiedInRangeDevices:(id)a0;
- (void)setRemoteQualifiedOutOfRangeDevices:(id)a0;

@end
