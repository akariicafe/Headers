@class NSString;
@protocol PHAInvokerDelegate;

@interface PHAInvoker : NSObject <NSXPCConnectionDelegate> {
    id<PHAInvokerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
