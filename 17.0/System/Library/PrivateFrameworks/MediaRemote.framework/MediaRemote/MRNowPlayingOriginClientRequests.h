@class NSDate, MRPlayerPath, NSArray, NSObject, NSMutableArray, MRDeviceInfo, MROrigin, NSNumber;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSDate *_lastPlayingDate;
    NSMutableArray *_nowPlayingClients;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    NSMutableArray *_lastPlayingDateCompletions;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *nowPlayingClientRequests;
@property (copy, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSNumber *volumeCapabilities;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSDate *lastPlayingDate;

- (void)removeAllClients;
- (id)initWithOrigin:(id)a0;
- (void)dealloc;
- (void)removeClient:(id)a0;
- (void)restoreNowPlayingClientState;
- (id)nowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)handleLastPlayingDateRequestWithCompletion:(id /* block */)a0;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(id /* block */)a0;
- (void)handleDeviceInfoRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)a0;
- (id)debugDescription;
- (void)handleVolumeRequestWithCompletion:(id /* block */)a0;

@end
