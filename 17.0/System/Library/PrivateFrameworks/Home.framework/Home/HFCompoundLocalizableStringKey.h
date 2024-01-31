@class NSString, NSMutableArray;

@interface HFCompoundLocalizableStringKey : HFLocalizableStringKey

@property (retain, nonatomic) NSString *format;
@property (readonly, nonatomic) NSMutableArray *localizableStrings;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 localizableStrings:(id)a1;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;

@end
