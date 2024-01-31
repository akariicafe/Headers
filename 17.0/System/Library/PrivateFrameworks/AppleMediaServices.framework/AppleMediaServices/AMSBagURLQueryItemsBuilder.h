@interface AMSBagURLQueryItemsBuilder : NSObject {
    void /* unknown type, empty encoding */ clientInfo;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ profileVersion;
    void /* unknown type, empty encoding */ operatingSystem;
    void /* unknown type, empty encoding */ operatingSystemVersion;
    void /* unknown type, empty encoding */ deviceClass;
    void /* unknown type, empty encoding */ buildVariant;
}

+ (id)storefrontFromQueryItems:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 operatingSystem:(id)a3 operatingSystemVersion:(id)a4 deviceClass:(id)a5 buildVariant:(id)a6;
- (id)queryItemsWithCookies:(id)a0 storefront:(id)a1;

@end
