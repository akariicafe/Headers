@interface CNSIMImporter : NSObject

+ (id)log;
+ (id)importPhonebookEntry:(id)a0 intoContactStore:(id)a1 container:(id)a2;
+ (BOOL)isContact:(id)a0 presentInContainer:(id)a1 store:(id)a2;
+ (id)nameComponentsFromString:(id)a0;
+ (id)prepareName:(id)a0;
+ (void)setNameString:(id)a0 onContact:(id)a1;

@end
