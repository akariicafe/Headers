@class NSString;
@protocol SXPresentationDelegate;

@interface SXPresentationDelegateContainer : NSObject <SXPresentationDelegateContainer>

@property (readonly, weak, nonatomic) id<SXPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerPresentationDelegate:(id)a0;

@end
