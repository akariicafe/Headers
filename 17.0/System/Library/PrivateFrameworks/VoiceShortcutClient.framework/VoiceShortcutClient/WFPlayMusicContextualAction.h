@class WFContextualActionParameter, INPlayMediaIntent, WFTopHitItemContextualAction;

@interface WFPlayMusicContextualAction : WFTopHitItemContextualAction <WFDisambiguableContextualAction>

@property (class, readonly) WFTopHitItemContextualAction *disambiguationAction;
@property (class, readonly) WFContextualActionParameter *disambiguationParameter;

@property (retain, nonatomic) INPlayMediaIntent *intent;

+ (BOOL)supportsSecureCoding;
+ (id)availableCollectionIdentifiers;
+ (void)disambiguationEntriesForCollection:(id)a0 limit:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)disambiguationSummaryStringForCollection:(id)a0;
+ (id)disambiguationSummaryStringWithParameterDefined:(BOOL)a0;

- (id)displayString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 artwork:(id)a1 namedQueryInfo:(id)a2;

@end
