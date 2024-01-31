@class NSString, NSDictionary, NSURL, FLFollowUpController;

@interface MDMFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *notificationInfo;

+ (void)clearFollowUpWithClientID:(id)a0;

- (void).cxx_destruct;
- (void)clearFollowUp;
- (void)presentFollowUp;
- (id)_constructFollowUp;
- (id)initWithStyle:(long long)a0 clientIdentifier:(id)a1 itemIdentifier:(id)a2 url:(id)a3 title:(id)a4 notificationInfo:(id)a5 userInfo:(id)a6;

@end
