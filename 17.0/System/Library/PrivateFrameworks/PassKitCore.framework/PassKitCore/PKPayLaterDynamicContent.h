@class NSDictionary;

@interface PKPayLaterDynamicContent : NSObject {
    NSDictionary *_contentByPageType;
}

+ (id)_contentByPageTypeFromDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dynamicContentPageForPageType:(unsigned long long)a0;
- (id)dynamicContentPageForPageType:(unsigned long long)a0 productType:(unsigned long long)a1 optionIdentifier:(id)a2;

@end
