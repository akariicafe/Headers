@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface RBTimeProviderEvent : NSObject <RBTimeProvidingEvent> {
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithSource:(id)a0;

- (void).cxx_destruct;
- (void)cancel;
- (id)_initWithSource:(id)a0;

@end
