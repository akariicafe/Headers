@class NSArray, NSString, NSDictionary, NSURL, ICRadioContentReference, NSNumber, ICStoreRequestContext;

@interface ICRadioGetTracksRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *additionalRequestParameters;
@property (nonatomic) BOOL allowsExplicitContent;
@property (nonatomic, getter=isPreservingCurrentlyPlayingItem) BOOL preservingCurrentlyPlayingItem;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled;
@property (nonatomic) long long reasonType;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) BOOL shouldResponseContainStationMetadata;
@property (nonatomic) long long requestedTrackCount;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationStringID;
@property (copy, nonatomic) NSURL *stationURL;
@property (copy, nonatomic) NSString *stationPlaybackAuthorizationToken;
@property (copy, nonatomic) ICRadioContentReference *seedContentReference;
@property (copy, nonatomic) ICRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) NSArray *queueContentReferences;

- (id)init;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
