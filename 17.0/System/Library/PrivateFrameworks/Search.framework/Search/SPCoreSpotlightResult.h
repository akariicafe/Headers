@class NSString, NSArray, NSDate;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility <NSCopying>

@property (retain) NSString *containerIdentifier;
@property (retain) NSString *relatedUniqueIdentifier;
@property (retain) NSString *accountIdentifier;
@property unsigned __int128 buddyScore;
@property (retain) NSString *itemIdentifier;
@property (retain) NSDate *interestingDate;
@property BOOL completed;
@property (retain) NSString *domainIdentifier;
@property long long *incomingCount;
@property long long *outgoingCount;
@property (retain) NSArray *compatibilityDescriptions;
@property (retain) NSString *relatedBundleID;
@property (retain) NSString *mailConversationIdentifier;
@property (retain) NSString *stringForDedupe;
@property (nonatomic) BOOL bestInContainer;
@property (nonatomic) BOOL hasAssociatedUserActivity;
@property (retain, nonatomic) NSArray *launchDates;
@property (retain, nonatomic) NSDate *contentCreationDate;
@property (retain, nonatomic) NSString *bundleID;
@property int title_maxlines;

- (id)init;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasDetail;

@end
