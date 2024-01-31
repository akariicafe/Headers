@class AMSDialogAction, NSArray, NSDictionary, NSURL, NSString, AMSMetricsEvent;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsNativeWatchCancelPlacement;
@property (readonly, nonatomic) NSDictionary *appearanceInfo;
@property (copy, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) AMSDialogAction *cancelAction;
@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent;
@property (retain, nonatomic) AMSDialogAction *defaultAction;
@property (copy, nonatomic) NSURL *iconBundleURL;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messageAccessibilityLabel;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (copy, nonatomic) NSString *preferredButtonActionIdentifier;
@property (nonatomic) BOOL preventsCancelButtonStyle;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAccessibilityLabel;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)requestWithTitle:(id)a0 message:(id)a1;

- (id)initWithError:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)addButtonAction:(id)a0;
- (void)addTextField:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 appearanceInfo:(id)a2;
- (id)locateActionWithIdentifier:(id)a0;
- (void)replaceAction:(id)a0;

@end
