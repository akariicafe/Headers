@class NSArray, BSAction;

@interface PRSPosterPathsAssertion : NSObject <NSSecureCoding> {
    BSAction *_invalidationAction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paths;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)invalidateWithResponder:(id)a0;
- (id)description;
- (id)initWithPaths:(id)a0 queue:(id)a1 invalidationHandler:(id /* block */)a2;
- (id)_initWithPaths:(id)a0 invalidationAction:(id)a1;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)initWithCoder:(id)a0;

@end
