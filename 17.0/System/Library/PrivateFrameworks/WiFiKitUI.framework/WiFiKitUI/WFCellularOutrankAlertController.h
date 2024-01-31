@class NSString;

@interface WFCellularOutrankAlertController : WFPromptAlertController

@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle;

+ (id)cancelButtonTitleForPrivateCellular:(BOOL)a0;
+ (id)cellularOutrankAlertControllerWithNetworkName:(id)a0 chinaDevice:(BOOL)a1 privateCellular:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)defaultButtonTitleForChinaDevice:(BOOL)a0;
+ (id)messageForChinaDevice:(BOOL)a0 privateCellular:(BOOL)a1;
+ (id)titleForNetworkName:(id)a0 chinaDevice:(BOOL)a1 privateCellular:(BOOL)a2;

- (void).cxx_destruct;

@end
