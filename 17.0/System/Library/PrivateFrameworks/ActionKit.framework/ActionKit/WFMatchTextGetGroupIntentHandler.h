@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMatchTextGetGroup:(id)a0 completion:(id /* block */)a1;
- (id)matchedTextInString:(id)a0 withResult:(id)a1 atIndex:(long long)a2;
- (void)resolveGroupIndexForMatchTextGetGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveMatchesForMatchTextGetGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForMatchTextGetGroup:(id)a0 withCompletion:(id /* block */)a1;

@end
