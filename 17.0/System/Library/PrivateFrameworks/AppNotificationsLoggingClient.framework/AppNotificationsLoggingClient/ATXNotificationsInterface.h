@class NSString, NSDate;

@interface ATXNotificationsInterface : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDate *publicationDate;
@property (nonatomic) unsigned long long numSuppActions;
@property (nonatomic) unsigned long long feed;

+ (id)getSubtitleFromMetadata:(id)a0;
+ (id)createArchivedMetadata:(id)a0 categoryId:(id)a1 title:(id)a2 subtitle:(id)a3 message:(id)a4 numSuppActions:(id)a5 feed:(unsigned long long)a6;
+ (id)getTitleFromMetadata:(id)a0;
+ (void)stripContentInMetadata:(id)a0;
+ (id)getMessageFromMetadata:(id)a0;
+ (id)getNumSuppActionsFromMetadata:(id)a0;
+ (id)getTopicFromMetadata:(id)a0;
+ (unsigned long long)getFeedFromMetadata:(id)a0;
+ (id)getBundleIdFromMetadata:(id)a0;
+ (id)getTimezoneFromMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)extractMetadata;
- (id)initWithCoder:(id)a0;

@end
