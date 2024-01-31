@class NSURL, NSDictionary;

@interface ICURLBagRadioConfiguration : NSObject {
    NSDictionary *_bagRadioDictionary;
}

@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) long long getTracksDPInfoKBSyncCount;
@property (readonly, nonatomic) long long maxSupportedProtocolVersion;
@property (readonly, nonatomic, getter=isContinueListeningAvailable) BOOL continueListeningAvailable;
@property (readonly, nonatomic) long long continueListeningMaxQueueSizeInRequest;
@property (readonly, nonatomic) long long continueListeningMaxUpcomingTracksSizeToMaintain;
@property (readonly, nonatomic) long long continueListeningLoadStationThreshold;

- (id)urlForBagRadioKey:(id)a0;
- (BOOL)shouldIncludeHTTPHeaderField:(id)a0 forRequestURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithBagRadioDictionary:(id)a0;

@end
