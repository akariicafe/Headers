@interface TTKTestCaseReader : NSObject

+ (id)loadFromFile:(id)a0;
+ (id)loadFromFile:(id)a0 inputMode:(id)a1 layouts:(id)a2;
+ (id)loadFromDir:(id)a0;
+ (id)loadFromPath:(id)a0;
+ (id)loadFromPath:(id)a0 fileManager:(id)a1;

@end
