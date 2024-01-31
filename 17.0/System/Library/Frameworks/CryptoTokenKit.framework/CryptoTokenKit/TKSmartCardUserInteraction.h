@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<TKSmartCardUserInteractionDelegate> delegate;
@property double initialTimeout;
@property double interactionTimeout;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;

@end
