@class NSDate;

@interface HDSummarySharingAnalytics : NSObject

@property (nonatomic) long long numberAuthorizationsSharingOut;
@property (nonatomic) double averageNumberAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long maxAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long minAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long numberPeopleSharingOut;
@property (nonatomic) long long numberPeopleSharingIn;
@property (copy, nonatomic) NSDate *mostRecentIncomingTransactionDate;
@property (nonatomic) long long numberOfAlertNotificationsEnabled;
@property (nonatomic) long long numberOfTrendNotificationsEnabled;
@property (nonatomic) long long numberOfUpdateNotificationsEnabled;
@property (copy, nonatomic) NSDate *askSomeoneToShareLastSelectedDate;
@property (copy, nonatomic) NSDate *sharingAuthorizationLastViewedDate;
@property (copy, nonatomic) NSDate *sharingContactOptionLastSelectedDate;

- (void).cxx_destruct;

@end
