@class _CDContextualChangeRegistration, _CDContextualPredicate, _CDContextualKeyPath;

@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0;

@end
