@interface PromotedContent.PrimitiveCreator : NSObject <APMetricPrimitiveCreating> {
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ branches;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ receiver;
}

- (id)init;
- (void)recordMetric:(long long)a0 forPurpose:(long long)a1 properties:(id)a2 internalProperties:(id)a3 order:(long long)a4 options:(long long)a5;
- (void).cxx_destruct;

@end
