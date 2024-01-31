@class NSString, IKAppContext;
@protocol VSMessagePortFeatureDelegate;

@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature>

@property (weak, nonatomic) id<VSMessagePortFeatureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)messagePort:(id)a0 didReceiveMessage:(id)a1;

@end
