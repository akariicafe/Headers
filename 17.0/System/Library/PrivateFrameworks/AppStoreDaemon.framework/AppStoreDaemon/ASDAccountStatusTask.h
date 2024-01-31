@protocol ASDClipServiceBroker;

@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {
    id<ASDClipServiceBroker> _broker;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL lookupFamilyInfoIfNecessary;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)statusWithCompletion:(id /* block */)a0;

@end
