@class NSString;

@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleChangeCase:(id)a0 completion:(id /* block */)a1;
- (void)resolveTextForChangeCase:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForChangeCase:(id)a0 withCompletion:(id /* block */)a1;
- (id)stringByApplyingAlternatingCaseToString:(id)a0;
- (id)stringByApplyingSentenceCaseToString:(id)a0 withLocale:(id)a1;
- (id)stringByApplyingTitleCaseToString:(id)a0;

@end
