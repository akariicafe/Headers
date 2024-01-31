@class NSString;

@interface _RBSExpirationWarningClient : NSObject <RBSInvalidatable> {
    id /* block */ _block;
    id /* block */ _invalidationBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;

@end
