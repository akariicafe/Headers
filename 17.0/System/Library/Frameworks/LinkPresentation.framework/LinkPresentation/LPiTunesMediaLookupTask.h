@class NSArray, NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray *_identifiers;
    NSArray *_bundleIdentifiers;
    NSString *_storefrontCountryCode;
}

- (id)init;
- (id)callerID;
- (void)start:(id /* block */)a0;
- (id)sharedBag;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;

@end
