@class WFDatePickerConfiguration, NSString, NSArray, NSError, NSDate, WFTextFieldConfiguration, WFAlertButton, NSMutableArray;
@protocol WFAlertPresenter;

@interface WFAlert : NSObject

@property (readonly, nonatomic) WFAlertButton *escapeButton;
@property (weak, nonatomic) id<WFAlertPresenter> presenter;
@property (readonly, nonatomic) NSArray *textFieldConfigurationHandlers;
@property (readonly, nonatomic) NSError *associatedError;
@property (weak, nonatomic) id<WFAlertPresenter> presenter;
@property (retain, nonatomic) NSMutableArray *mutableButtons;
@property (retain, nonatomic) NSMutableArray *mutableTextFieldConfigurationHandlers;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long preferredStyle;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) WFTextFieldConfiguration *textFieldConfiguration;
@property (retain, nonatomic) WFDatePickerConfiguration *datePickerConfiguration;
@property (copy, nonatomic) NSArray *textFieldResults;
@property (copy, nonatomic) NSDate *datePickerResult;

+ (id)alertWithError:(id)a0;
+ (id)alertWithPreferredStyle:(long long)a0;
+ (id)alertWithError:(id)a0 confirmationHandler:(id /* block */)a1;

- (id)init;
- (void)addButton:(id)a0;
- (void).cxx_destruct;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)a0;
- (void)dismissWithCompletionHandler:(id /* block */)a0;

@end
