@class NSString, UIWindow;

@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding>

@property (readonly, nonatomic) UIWindow *presentationAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)initWithPresentationAnchor:(id)a0;

@end
