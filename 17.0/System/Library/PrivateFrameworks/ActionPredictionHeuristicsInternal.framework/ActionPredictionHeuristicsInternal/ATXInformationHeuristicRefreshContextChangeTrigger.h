@class NSString, _CDContextualPredicate, _CDContextualKeyPath, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
    NSString *_registrationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCDContextualKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)isEqual:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0 predicate:(id)a1 registrationIdentifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0;

@end
