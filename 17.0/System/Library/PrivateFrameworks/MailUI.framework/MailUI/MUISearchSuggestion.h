@class MUISearchSuggestionCategory, CSSuggestion, NSString, NSPredicate;
@protocol MUISearchSuggestionDelegate;

@interface MUISearchSuggestion : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion;
@property (readonly, nonatomic) MUISearchSuggestionCategory *category;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL supportsRanking;
@property (readonly, nonatomic) double ranking;
@property (readonly, nonatomic) BOOL exactMatch;
@property (weak, nonatomic) id<MUISearchSuggestionDelegate> delegate;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
