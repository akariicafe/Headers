@class ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource> {
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

- (id)init;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_createSmallContactsWidgetForPeople:(id)a0;
- (void).cxx_destruct;
- (id)_createMediumContactsWidgetForPeople:(id)a0 entities:(id)a1;

@end
