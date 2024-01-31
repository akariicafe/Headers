@class NSString;

@interface SwiftUI.UserActivityTrackingInfo : NSObject <NSUserActivityDelegate> {
    void /* unknown type, empty encoding */ userActivity;
    void /* unknown type, empty encoding */ handlers;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ activityType;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)userActivityWillSave:(id)a0;
- (void).cxx_destruct;

@end
