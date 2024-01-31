@class MDMBook;

@interface DMCManagedBookPayload : MCPayload

@property (retain, nonatomic) MDMBook *book;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)title;
- (id)initWithBook:(id)a0;

@end
