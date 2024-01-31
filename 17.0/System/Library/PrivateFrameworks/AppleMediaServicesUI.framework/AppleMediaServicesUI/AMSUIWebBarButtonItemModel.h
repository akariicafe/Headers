@class NSArray, NSString, AMSUIWebButtonModel, AMSUIWebAppViewModel;

@interface AMSUIWebBarButtonItemModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) AMSUIWebAppViewModel *appViewModel;
@property (retain, nonatomic) AMSUIWebButtonModel *buttonModel;
@property (retain, nonatomic) NSArray *conditionalButtonModels;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
