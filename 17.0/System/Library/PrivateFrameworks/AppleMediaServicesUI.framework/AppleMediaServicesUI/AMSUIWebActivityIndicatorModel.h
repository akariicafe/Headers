@class NSString;

@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface>

@property (nonatomic) BOOL animate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
