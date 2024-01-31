@class NSDate, NSUUID, NSString, NSURL, NSError, NSSet, NSDictionary, SFPeerDevice, UAUserActivityAnalyticsInfo, NSMutableDictionary;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_payloads;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *uuid;
@property unsigned long long type;
@property (copy) NSString *title;
@property (copy) NSString *activityType;
@property (copy) NSString *dynamicActivityType;
@property (copy) NSString *teamIdentifier;
@property (copy) NSURL *webpageURL;
@property (copy) NSURL *referrerURL;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSDictionary *options;
@property (copy) NSError *encodedUserInfoError;
@property (copy) NSSet *requiredUserInfoKeys;
@property (copy) NSDate *when;
@property (copy) NSDate *lastInterestingTime;
@property (copy) NSDictionary *payloads;
@property BOOL eligibleForHandoff;
@property BOOL eligibleForSearch;
@property BOOL eligibleForPublicIndexing;
@property BOOL eligibleForReminders;
@property BOOL eligibleForPrediction;
@property (readonly) BOOL eligibleToAdvertise;
@property (readonly) BOOL eligibleToAlwaysAdvertise;
@property (copy) NSDictionary *encodingOptions;
@property (copy) NSString *contentUserAction;
@property (copy) NSSet *keywords;
@property (copy) NSDate *expirationDate;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSError *error;
@property (readonly, getter=isDirty) BOOL dirty;
@property (getter=isPayloadAvailable) BOOL payloadAvailable;
@property (getter=isPayloadRequested) BOOL payloadRequested;
@property BOOL active;
@property (getter=isUniversalLink) BOOL universalLink;
@property (retain) SFPeerDevice *peerDevice;
@property (copy) NSString *peerDeviceType;
@property (copy) NSString *bundleIdentifier;
@property (retain) UAUserActivityAnalyticsInfo *wasContinuedInfo;

+ (id)encodedInfoToOldEncodedInfo:(id)a0;

- (id)secondaryUserActivityString;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1 options:(id)a2;
- (void)clearPayload;
- (id)optionalUserActivityData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArchivedUserActivityInfo:(id)a0;
- (BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(id /* block */)a0;
- (BOOL)setPayload:(id)a0 identifier:(id)a1;
- (id)archiveUserActivityInfo;
- (id)description;
- (id)initWithUserActivityInfo:(id)a0;
- (id)payloadIdentifiers;
- (void).cxx_destruct;
- (id)logString;
- (id)userActivityString;
- (BOOL)requestPayloadWithCompletionHandler:(id /* block */)a0;
- (BOOL)requestPayloadWithCompletionHandlerEvenIfClean:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)provenance;
- (void)_createUserActivityStrings:(id)a0 secondaryString:(id)a1 optionalData:(id)a2;
- (void)fetchAllNearbyAppSuggestions:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)statusString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)payloadForIdentifier:(id)a0;

@end
