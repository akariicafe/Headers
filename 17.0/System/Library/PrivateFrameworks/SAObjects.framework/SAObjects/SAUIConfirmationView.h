@class NSArray, NSString, NSNumber;

@interface SAUIConfirmationView : SAAceView

@property (copy, nonatomic) NSArray *allConfirmationOptions;
@property (copy, nonatomic) NSString *cancelTrigger;
@property (copy, nonatomic) NSArray *confirmCommands;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *denyCommands;
@property (copy, nonatomic) NSString *denyText;
@property (copy, nonatomic) NSNumber *generateForegroundAppSearchButtonLabel;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

+ (id)confirmationView;
+ (id)confirmationViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
