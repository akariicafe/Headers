@interface _LTTextToSpeechSanitizer : NSObject

+ (id)_regularExpression;
+ (id)_stringReplacingRedactionsInString:(id)a0 withMarker:(id)a1;
+ (BOOL)stringContainsRedaction:(id)a0;
+ (id)stringReplacingRedactionsWithBeepMarker:(id)a0;

@end
