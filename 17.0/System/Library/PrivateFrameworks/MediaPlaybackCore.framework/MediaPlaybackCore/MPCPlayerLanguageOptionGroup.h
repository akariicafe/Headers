@class NSString, NSArray, MPNowPlayingInfoLanguageOption, MPCPlayerResponse;

@interface MPCPlayerLanguageOptionGroup : NSObject {
    unsigned long long _currentIndex;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long numberOfOptions;
@property (readonly, nonatomic) unsigned long long indexOfSelectedOption;
@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *selectedOption;
@property (readonly, nonatomic) BOOL allowEmptySelection;

- (void).cxx_destruct;
- (id)localizedTitleForOptionAtIndex:(unsigned long long)a0;
- (id)changeRequestForOptionAtIndex:(unsigned long long)a0;
- (id)initWithLanguageOptionGroups:(id)a0 currentLanguageOptions:(id)a1 response:(id)a2;

@end
