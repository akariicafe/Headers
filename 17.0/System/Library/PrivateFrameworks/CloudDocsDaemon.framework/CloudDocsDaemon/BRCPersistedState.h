@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadFromClientStateInSession:(id)a0;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

@end
