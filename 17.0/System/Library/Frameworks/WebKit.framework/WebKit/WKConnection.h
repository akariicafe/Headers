@class NSString;
@protocol WKConnectionDelegate;

@interface WKConnection : NSObject <WKObject> {
    struct WeakObjCPtr<id<WKConnectionDelegate>> { id m_weakReference; } _delegate;
}

@property (weak, nonatomic) id<WKConnectionDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)_connection;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendMessageWithName:(id)a0 body:(id)a1;

@end
