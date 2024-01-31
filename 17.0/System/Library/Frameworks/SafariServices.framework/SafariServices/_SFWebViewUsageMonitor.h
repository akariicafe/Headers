@class NSString;

@interface _SFWebViewUsageMonitor : NSObject {
    NSString *_hostAppIdentifier;
}

@property (nonatomic) BOOL userInteracted;
@property (nonatomic) BOOL urlHasQueryString;
@property (nonatomic) BOOL urlHasIDFA;
@property (nonatomic) BOOL viewControllerViewIsHidden;
@property (readonly, nonatomic) BOOL shouldAudit;
@property (readonly, nonatomic) NSString *stringAsAuditKey;

- (void).cxx_destruct;
- (void)auditUsageIfNeeded;
- (void)checkURL:(id)a0;
- (id)initWithHostAppIdentifier:(id)a0;

@end
