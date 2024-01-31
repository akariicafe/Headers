@class AMSFollowUpAction, NSSet, NSString;

@interface AMSFollowUpNotification : NSObject

@property (retain, nonatomic) AMSFollowUpAction *activateAction;
@property (retain, nonatomic) NSSet *options;
@property (retain, nonatomic) NSString *informativeText;
@property (retain, nonatomic) NSString *title;

+ (id)defaultOptions;
+ (id)optionForString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)generateNotification;
- (id)initWithJSONDictionary:(id)a0 parentIdentifier:(id)a1 logKey:(id)a2;

@end
