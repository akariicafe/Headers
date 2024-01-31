@class NSString, NSDate;

@interface FBKSCampaignError_FrameworkPrivateName : NSObject {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ errorDescription;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ code;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
