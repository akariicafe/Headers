@class NSString;

@interface TSAnalyticsReferral : NSObject {
    void /* unknown type, empty encoding */ userActivityType;
    void /* unknown type, empty encoding */ creativeID;
    void /* unknown type, empty encoding */ campaignID;
    void /* unknown type, empty encoding */ campaignType;
    void /* unknown type, empty encoding */ referringApplication;
    void /* unknown type, empty encoding */ referringURL;
    void /* unknown type, empty encoding */ widgetModeGroupID;
}

@property (nonatomic, readonly) NSString *userActivityType;
@property (nonatomic, readonly) NSString *creativeID;
@property (nonatomic, readonly) NSString *campaignID;
@property (nonatomic, readonly) NSString *campaignType;
@property (nonatomic, readonly) NSString *referringApplication;
@property (nonatomic, readonly) NSString *referringURL;
@property (nonatomic, readonly) NSString *widgetModeGroupID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ widgetEngagement;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appOpenedByUserActivity;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appSessionStartMethod;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appSessionStartNotificationType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserActivityType:(id)a0 creativeID:(id)a1 campaignID:(id)a2 campaignType:(id)a3 referringApplication:(id)a4 referringURL:(id)a5 widgetModeGroupID:(id)a6 widgetEngagement:(id)a7 appOpenedByUserActivity:(BOOL)a8 appSessionStartMethod:(int)a9 appSessionStartNotificationType:(int)a10;

@end
