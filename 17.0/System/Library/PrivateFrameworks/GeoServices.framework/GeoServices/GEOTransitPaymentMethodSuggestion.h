@class NSArray, GEOFormattedString, GEOPBTransitPaymentMethodSuggestion;

@interface GEOTransitPaymentMethodSuggestion : NSObject <NSCopying> {
    GEOPBTransitPaymentMethodSuggestion *_suggestion;
}

@property (readonly, nonatomic) unsigned long long marketMUID;
@property (readonly, nonatomic) NSArray *paymentMethodIndices;
@property (readonly, nonatomic) GEOFormattedString *tipTitle;
@property (readonly, nonatomic) GEOFormattedString *tipSubtitle;
@property (readonly, nonatomic) NSArray *educationalScreenAssets;
@property (readonly, nonatomic) NSArray *educationalScreenPaymentBody;
@property (readonly, nonatomic) GEOFormattedString *educationalScreenTitle;
@property (readonly, nonatomic) int purpose;
@property (readonly, nonatomic) int type;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuggestionData:(id)a0;

@end
