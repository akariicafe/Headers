@class NSDictionary, NSString;

@interface VKClientLocalizedStrings : NSObject {
    NSDictionary *_stringDictionary;
    NSString *_locale;
}

- (void)getAnnotationTextForChargersNoStatus:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (void)getAnnotationTextForChargersAvailable:(unsigned long long)a0 total:(unsigned long long)a1 text:(id *)a2 locale:(id *)a3;
- (void)getAnnotationTextForChargersNoneAvailable:(id *)a0 locale:(id *)a1;
- (void).cxx_destruct;
- (id)initWithStrings:(id)a0 locale:(id)a1;
- (void)getClusterAnnotationTextForClusterCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (void)getTextForKey:(id)a0 text:(id *)a1 locale:(id *)a2;

@end
