@class NSString, NSMutableDictionary, NSArray, NSDate;

@interface RTPeopleDiscoverySingleContactRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *contactID;
@property (readonly, nonatomic) NSDate *firstObservation;
@property (readonly, nonatomic) NSDate *latestAdvertisementDate;
@property (readonly, nonatomic) NSMutableDictionary *RSSIDistribution;
@property (readonly, nonatomic) unsigned long long numAdvReceived;
@property (copy, nonatomic) NSArray *interactionSessions;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)closeInteractionSession:(id)a0;
- (double)getTotalInteractionDuration;
- (id)initWithContactID:(id)a0 withAdvertisement:(id)a1;
- (void)mergeWithAnotherSingleContactRecord:(id)a0;
- (void)updateRSSIDistribution:(long long)a0;
- (void)updateSingleContactRecordOnAdvReceived:(id)a0;

@end
