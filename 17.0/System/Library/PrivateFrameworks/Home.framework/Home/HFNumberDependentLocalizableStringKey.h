@interface HFNumberDependentLocalizableStringKey : HFLocalizableStringKey

@property (nonatomic) long long integerArgument;

- (id)initWithKey:(id)a0;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;

@end
