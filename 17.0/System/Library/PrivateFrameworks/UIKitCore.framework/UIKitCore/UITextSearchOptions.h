@interface UITextSearchOptions : NSObject

@property (nonatomic) unsigned long long stringCompareOptions;
@property (nonatomic) long long wordMatchMethod;

+ (id)defaultSearchOptions;

- (BOOL)isEqual:(id)a0;

@end
