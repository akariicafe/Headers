@class NSArray, NSString;

@interface CNACTStewieFacadeTestDouble : NSObject <CNACTStewieFacade> {
    NSArray *_phrases;
    NSArray *_numbers;
}

@property (readonly) BOOL isEmergencyEnabled;
@property (readonly) NSArray *emergencyTerms;
@property (readonly) BOOL isAvocetEnabled;
@property (readonly) NSArray *avocetTerms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)terms;
- (id)initWithPhrases:(id)a0 numbers:(id)a1;

@end
