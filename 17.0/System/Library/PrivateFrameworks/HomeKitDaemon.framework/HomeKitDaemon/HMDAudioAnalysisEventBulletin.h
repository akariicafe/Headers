@class NSString, HMDAccessoryNameComposer, NSUUID, NSDate, NSDictionary;
@protocol HMDAudioAnalysisEventSubscriberContext;

@interface HMDAudioAnalysisEventBulletin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDAccessoryNameComposer *accessoryNameComposer;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSUUID *notificationUUID;
@property (readonly) NSDate *dateOfOccurrence;
@property (readonly) NSDate *startDate;
@property (readonly, copy) NSDictionary *presence;
@property (readonly, copy) NSString *soundIdentifier;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *name;
@property (readonly) id<HMDAudioAnalysisEventSubscriberContext> context;

- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)setNotificationUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithContext:(id)a0;
- (void)configureAccessoryNameComposer;
- (id)initWithReason:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 presence:(id)a3 notificationUUID:(id)a4 state:(unsigned long long)a5 soundIdentifier:(id)a6 name:(id)a7 threadIdentifier:(id)a8 accessoryUUID:(id)a9 title:(id)a10;
- (id)localizedKeyForBody;
- (id)localizedKeyForEventEndWithDropIn:(BOOL)a0 homeName:(id)a1;
- (id)localizedKeyForEventStartWithDropIn:(BOOL)a0 homeName:(id)a1;
- (id)localizedKeyForTitle;
- (id)stringForAudioAnalysisReasonWithHomeName:(id)a0;

@end
