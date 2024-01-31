@class VUIActionAppPunchout, NSString, NSDictionary, VUIAppContext;

@interface VUIActionOpenWebLink : VUIAction

@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSDictionary *metrics;
@property (retain, nonatomic) VUIActionAppPunchout *actionPunchout;
@property (retain, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
