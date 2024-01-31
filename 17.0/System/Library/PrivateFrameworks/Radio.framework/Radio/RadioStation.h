@class NSData, NSString, NSArray, NSURL, NSManagedObject, NSDictionary, RadioArtworkCollection, RadioModel;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol>

@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationHash;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long adamID;
@property (nonatomic) int sortOrder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stationDescription;
@property (copy, nonatomic) NSString *coreSeedName;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSData *artworkURLData;
@property (nonatomic, getter=isPreviewOnly) BOOL previewOnly;
@property (retain, nonatomic) id seedTracks;
@property (nonatomic) long long songMixType;
@property (nonatomic) BOOL editEnabled;
@property (retain, nonatomic) NSArray *editableFields;
@property (nonatomic) BOOL likesEnabled;
@property (nonatomic) BOOL hasSkipRules;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL skipEnabled;
@property (nonatomic) int skipFrequency;
@property (copy, nonatomic) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (copy, nonatomic) NSArray *skipTimestamps;
@property (copy, nonatomic) NSArray *trackPlaybackDescriptorQueue;
@property (nonatomic) BOOL virtualPlayEnabled;
@property (nonatomic, getter=isFeatured) BOOL featured;
@property (nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property (nonatomic) BOOL requiresSubscription;
@property (nonatomic, getter=isSponsored) BOOL sponsored;
@property (retain, nonatomic) NSData *adData;
@property (nonatomic) unsigned long long impressionThreshold;
@property (nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement;
@property (retain, nonatomic) NSURL *streamURL;
@property (retain, nonatomic) NSURL *streamCertificateURL;
@property (retain, nonatomic) NSURL *streamKeyURL;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (nonatomic) int subscriberCount;
@property (copy, nonatomic) NSString *shareToken;
@property (copy, nonatomic) NSDictionary *debugDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) RadioArtworkCollection *artworkCollection;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, copy, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
@property (readonly, nonatomic, getter=isDatabaseBacked) BOOL databaseBacked;
@property (readonly, nonatomic) NSManagedObject *managedObject;
@property (readonly, nonatomic) RadioModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)artworkURLForSize:(struct CGSize { double x0; double x1; })a0 expectedSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)_radioModelWasDeletedNotification:(id)a0;
- (id)initWithModel:(id)a0 managedObject:(id)a1;

@end
