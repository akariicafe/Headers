@class NSString, NSDictionary, NSDate;

@interface APPCAppStoreSupplementalContext : NSObject <APPCPromotableAppStoreSupplementalContext> {
    void /* unknown type, empty encoding */ storeFront;
    void /* unknown type, empty encoding */ storeFrontLocale;
    void /* unknown type, empty encoding */ impressionCap;
    void /* unknown type, empty encoding */ clickCap;
    void /* unknown type, empty encoding */ additionalImpressionCaps;
    void /* unknown type, empty encoding */ additionalClickCaps;
    void /* unknown type, empty encoding */ adamId;
    void /* unknown type, empty encoding */ appMetadataFields;
    void /* unknown type, empty encoding */ requestTime;
}

@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontLocale;
@property (nonatomic, copy) NSDictionary *impressionCap;
@property (nonatomic, copy) NSDictionary *clickCap;
@property (nonatomic, copy) NSDictionary *additionalImpressionCaps;
@property (nonatomic, copy) NSDictionary *additionalClickCaps;
@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSDictionary *appMetadataFields;
@property (nonatomic, copy) NSDate *requestTime;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
