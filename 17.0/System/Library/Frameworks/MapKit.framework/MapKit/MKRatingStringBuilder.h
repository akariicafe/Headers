@interface MKRatingStringBuilder : NSObject

+ (Class)ratingStringProviderForMapItem:(id)a0;
+ (id)carPlayHeaderStringForMapItem:(id)a0 titleAttributes:(id)a1 providerAttributes:(id)a2;
+ (id)delimitedPriceRangeAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2;
+ (id)priceLabelStringFromMapItem:(id)a0;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingColorForMapItem:(id)a0;
+ (id)ratingSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingSymbolNameForMapItem:(id)a0;

@end
