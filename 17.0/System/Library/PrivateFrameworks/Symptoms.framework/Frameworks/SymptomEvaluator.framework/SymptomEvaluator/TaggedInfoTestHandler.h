@class NSString;

@interface TaggedInfoTestHandler : NSObject <ConfigurableObjectProtocol, ManagedEventInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;
+ (id)configureClass:(id)a0;

@end
