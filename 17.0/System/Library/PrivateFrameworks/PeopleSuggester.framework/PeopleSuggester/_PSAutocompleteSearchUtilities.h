@interface _PSAutocompleteSearchUtilities : NSObject

+ (id)emojiCharacterSet;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSearchTerm:(id)a0 inTarget:(id)a1 tokenizedByCharacterSet:(id)a2;
+ (BOOL)searchString:(id)a0 containsOnlyCharactersInSet:(id)a1;

@end
