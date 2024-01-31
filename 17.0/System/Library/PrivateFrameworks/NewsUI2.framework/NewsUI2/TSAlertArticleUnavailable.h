@class NSString;

@interface TSAlertArticleUnavailable : NSObject <TSAlertable> {
    void /* unknown type, empty encoding */ alert;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithBlockedReason:(unsigned long long)a0;

@end
