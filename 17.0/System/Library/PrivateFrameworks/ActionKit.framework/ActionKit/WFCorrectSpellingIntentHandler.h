@class NSString;

@interface WFCorrectSpellingIntentHandler : NSObject <WFCorrectSpellingIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCorrectSpelling:(id)a0 completion:(id /* block */)a1;
- (void)resolveTextForCorrectSpelling:(id)a0 withCompletion:(id /* block */)a1;

@end
