@class NSString, WFIcon, WFWorkflowIcon;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) NSString *appBundleIdentifier;

+ (id)attributionWithAppBundleIdentifier:(id)a0;
+ (id)attributionWithTitle:(id)a0 icon:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (id)initWithTitle:(id)a0 icon:(id)a1 workflowIcon:(id)a2;
- (id)initWithTitle:(id)a0 icon:(id)a1 workflowIcon:(id)a2 appBundleIdentifier:(id)a3;

@end
