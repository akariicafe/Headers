@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AutoLinkUpgradeHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

@end
