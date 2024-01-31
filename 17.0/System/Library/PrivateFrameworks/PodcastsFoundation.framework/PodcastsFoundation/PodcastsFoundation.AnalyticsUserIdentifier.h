@class NSString;

@interface PodcastsFoundation.AnalyticsUserIdentifier : NSObject {
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ userId;
}

@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic) void /* unknown type, empty encoding */ userAllowsPersonalization;
@property (nonatomic) void /* unknown type, empty encoding */ userUnder13YearsOld;
@property (nonatomic) void /* unknown type, empty encoding */ userIsManagedAccount;

- (id)init;
- (void).cxx_destruct;

@end
