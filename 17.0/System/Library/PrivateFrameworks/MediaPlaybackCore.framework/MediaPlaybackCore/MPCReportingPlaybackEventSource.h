@class NSString, MPModelGenericObject, NSData, NSNumber, MPModelPlayEvent;
@protocol MPCReportingIdentityPropertiesLoading;

@interface MPCReportingPlaybackEventSource : NSObject

@property (retain, nonatomic) id<MPCReportingIdentityPropertiesLoading> identityPropertiesLoader;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) double eventDuration;
@property (nonatomic) unsigned long long overrideItemType;
@property (copy, nonatomic) NSString *lyricsID;
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) BOOL shouldReportPlayEventsToStore;
@property (copy, nonatomic) NSData *trackInfo;
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSData *jingleTimedMetadata;
@property (copy, nonatomic) NSData *recommendationData;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;

- (id)init;
- (void).cxx_destruct;

@end
