@class NSString;

@interface WFShowWidgetConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *sizeClass;
@property (nonatomic) BOOL isInteractive;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)initWithAppBundleIdentifier:(id)a0 intentType:(id)a1 sizeClass:(id)a2;
- (id)initWithAppBundleIdentifier:(id)a0 intentType:(id)a1 sizeClass:(id)a2 interactive:(BOOL)a3;

@end
