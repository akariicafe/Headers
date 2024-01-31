@class AMSUIWebButtonModel, NSString;

@interface AMSUIWebToolbarModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) AMSUIWebButtonModel *leftButton;
@property (retain, nonatomic) AMSUIWebButtonModel *rightButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
