@class NSString;
@protocol MKDELETESIMRouterDelegate;

@interface MKDELETESIMRouter : NSObject <MKHTTPRouter>

@property (nonatomic) id<MKDELETESIMRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
