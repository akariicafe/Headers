@class NSString;

@interface MKFirstPartyRatingStringBuilder : NSObject <MKRatingStringProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_colorForPercentage:(double)a0;
+ (id)carPlayHeaderStringForMapItem:(id)a0 titleAttributes:(id)a1 providerAttributes:(id)a2;
+ (id)percentageStringForMapItem:(id)a0 showNumberOfRatings:(BOOL)a1 textColor:(id)a2 font:(id)a3 theme:(id)a4;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingColorForMapItem:(id)a0;
+ (id)ratingPercentageAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingStringForPercentage:(double)a0 font:(id)a1 color:(id)a2 includeGlyph:(BOOL)a3;
+ (id)ratingSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingSymbolName;
+ (id)thumbRecommendStringWithMapItem:(id)a0 font:(id)a1 includeGlyph:(BOOL)a2;
+ (id)userRecommendationStringWithFont:(id)a0 ratingState:(long long)a1 numberOfPhotosAdded:(unsigned long long)a2;
+ (id)userRecommendedRatingSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;


@end
