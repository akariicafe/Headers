@interface PersonalizationPortraitInternals.BackgroundTextConsumer : PersonalizationPortraitInternals.Consumer <HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVMailConsumer>

- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeNewsArticleViewsWithContext:(id)a0;
- (id)consumeSafariContentWithContext:(id)a0;
- (id)consumeMailContentWithContext:(id)a0;
- (void).cxx_destruct;
- (id)consumeNotesContentWithContext:(id)a0;
- (id)consumeThirdPartyAppContentWithContext:(id)a0;

@end
