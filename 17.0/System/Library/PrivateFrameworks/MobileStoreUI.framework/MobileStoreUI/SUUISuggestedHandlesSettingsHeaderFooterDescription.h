@class NSArray, SUUIClientContext;
@protocol SUUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

@interface SUUISuggestedHandlesSettingsHeaderFooterDescription : SUUISettingsHeaderFooterDescription {
    SUUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
}

@property (weak, nonatomic) id<SUUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;
- (id)helpText;
- (id)initWithSuggestedHandles:(id)a0 clientContext:(id)a1 delegate:(id)a2;
- (void)selectedHandleAtIndex:(unsigned long long)a0;
- (id)suggestedHandles;

@end
