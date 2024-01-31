@class GEOLogMsgState, NSString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface GEOAPStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
    NSNumber *_offlineSearchODSVersion;
    NSNumber *_offlineDirectionsODSVersion;
}

@property (retain) NSString *countryCode;
@property (readonly, nonatomic) BOOL isMaps;

+ (id)sharedFactory;

- (id)placeCardRap;
- (id)init;
- (void)dealloc;
- (id)impressionObject;
- (void).cxx_destruct;
- (id)searchResults;
- (id)mapsPlaceIds;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (double)_monthResolution:(double)a0;
- (id)placeCardReveal;
- (void)_updateOfflineVersionInfo;
- (id)curatedCollectionRedacted;
- (void)deviceCountryChanged:(id)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)mapUIShown;
- (void)offlineDataActiceVersionChanged:(id)a0;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)stateForType:(long long)a0;

@end
