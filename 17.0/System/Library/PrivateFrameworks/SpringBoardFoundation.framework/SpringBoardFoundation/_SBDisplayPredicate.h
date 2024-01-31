@class NSString;

@interface _SBDisplayPredicate : SBDisplayModePredicate {
    NSString *_displayHardwareIdentifier;
    NSString *_displayProductName;
}

+ (id)fromDefaultsKey:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplay:(id)a0;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;
- (id)initWithDisplayHardwareIdentifier:(id)a0 productName:(id)a1;

@end
