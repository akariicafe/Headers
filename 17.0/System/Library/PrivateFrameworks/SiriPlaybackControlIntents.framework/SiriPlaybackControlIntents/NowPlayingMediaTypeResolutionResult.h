@interface NowPlayingMediaTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithNowPlayingMediaTypeToConfirm:(long long)a0;
+ (id)successWithResolvedNowPlayingMediaType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
