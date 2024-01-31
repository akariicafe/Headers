@class NSString, NSURL;

@interface HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ logoURL;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ textColor;
@property (nonatomic, readonly) NSURL *logoURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ style;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 backgroundColor:(id)a2 textColor:(id)a3 logoURL:(id)a4 style:(long long)a5;

@end
