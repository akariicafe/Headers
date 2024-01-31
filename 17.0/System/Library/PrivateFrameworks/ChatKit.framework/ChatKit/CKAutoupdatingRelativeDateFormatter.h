@interface CKAutoupdatingRelativeDateFormatter : CKAutoupdatingDateFormatter

+ (id)relativeDateFormatter;
+ (id)relativeStringFromDate:(id)a0;
+ (id)weekdayTemplateCharacters;

- (id)stringFromDate:(id)a0;
- (id)stringFromDate:(id)a0 isRelative:(BOOL *)a1;

@end
