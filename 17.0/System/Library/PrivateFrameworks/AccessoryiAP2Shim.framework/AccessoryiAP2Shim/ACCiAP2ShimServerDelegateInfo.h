@protocol ACCiAP2ShimServerDelegate;

@interface ACCiAP2ShimServerDelegateInfo : NSObject

@property (readonly) id<ACCiAP2ShimServerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
