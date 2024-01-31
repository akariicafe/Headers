@interface _EAREditDistance : NSObject

- (void)editAlignmentWithRefText:(id)a0 hypText:(id)a1 placeholderSymbol:(id)a2 caseInsensitive:(BOOL)a3 removeWordSense:(BOOL)a4 completion:(id /* block */)a5;
- (void)editAlignmentWithRefTokens:(id)a0 hypTokens:(id)a1 placeholderSymbol:(id)a2 caseInsensitive:(BOOL)a3 removeWordSense:(BOOL)a4 completion:(id /* block */)a5;
- (id)editDistanceWithRefText:(id)a0 hypText:(id)a1 caseInsensitive:(BOOL)a2 removeWordSense:(BOOL)a3;
- (id)editDistanceWithRefTokens:(id)a0 hypTokens:(id)a1 caseInsensitive:(BOOL)a2 removeWordSense:(BOOL)a3;

@end
