@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)_type;

- (void)becomeCurrent;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_becomeCurrentNoHelper;
- (void)_setStore:(id)a0;

@end
