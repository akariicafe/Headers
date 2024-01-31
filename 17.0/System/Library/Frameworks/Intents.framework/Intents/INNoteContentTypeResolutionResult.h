@interface INNoteContentTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNoteContentTypeToConfirm:(long long)a0;
+ (id)successWithResolvedNoteContentType:(long long)a0;

- (void)transformResolutionResultForIntent:(id)a0 intentSlotDescription:(id)a1 withOptionsProvider:(id)a2 completion:(id /* block */)a3;

@end
