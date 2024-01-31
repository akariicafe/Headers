@class UIFont;

@interface MRURouteTextFormatterConfiguration : NSObject

@property (nonatomic) long long truncationMode;
@property (nonatomic) long long minimumEndCharacterCount;
@property (nonatomic) BOOL forcesUppercaseText;
@property (nonatomic) BOOL displayAsSiriSuggestion;
@property (nonatomic) BOOL omitGroupLeaderName;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double textBoundingWidth;
@property (nonatomic) BOOL allowsMultitruncation;

- (id)init;
- (void).cxx_destruct;

@end
