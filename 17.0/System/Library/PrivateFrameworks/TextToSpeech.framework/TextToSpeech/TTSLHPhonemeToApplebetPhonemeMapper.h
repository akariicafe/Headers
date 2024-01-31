@interface TTSLHPhonemeToApplebetPhonemeMapper : NSObject

+ (id /* block */)_acceptRule;
+ (id)_initializeRules;
+ (id /* block */)_leftRaisingContextRule;
+ (id)_phonemeArray:(id)a0;
+ (id)_phonemeRules;
+ (id)_phonoMatch:(id)a0 match:(id)a1 matchpos:(int)a2 count:(int)a3;
+ (id)_phonoTranslation:(id)a0;
+ (id)_retrieveRegularExpression:(id)a0;
+ (id /* block */)_rightRaisingContextRule;
+ (id /* block */)_uberLeftRaisingContextRule;
+ (id /* block */)_uberRightRaisingContextRule;
+ (id /* block */)_uberUberRightRaisingContextRule;
+ (id /* block */)_uberUberUberRightRaisingContextRule;
+ (id)convertLHToApplebet:(id)a0;

@end
