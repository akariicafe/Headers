@class NSString;

@interface WFDeveloperOutrankAlertController : WFPromptAlertController

@property (copy, nonatomic) NSString *okButtonTitle;
@property (copy, nonatomic) NSString *settingButtonTitle;

+ (id)developerOutrankAlertControllerWithNetworkName:(id)a0 chinaDevice:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)messageForChinaDevice:(BOOL)a0;
+ (id)okButtonTitle;
+ (id)settingsButtonTitle;
+ (id)titleForNetworkName:(id)a0 chinaDevice:(BOOL)a1;

- (void).cxx_destruct;

@end
