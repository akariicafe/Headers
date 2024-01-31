@protocol PRDevicePoseProviderDelegate;

@interface PRDevicePoseProvider : NSObject

@property (weak) id<PRDevicePoseProviderDelegate> delegate;

- (void)reset;
- (void).cxx_destruct;

@end
