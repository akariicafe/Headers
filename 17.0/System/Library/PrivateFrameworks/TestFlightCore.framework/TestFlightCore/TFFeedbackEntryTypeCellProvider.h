@interface TFFeedbackEntryTypeCellProvider : NSObject

+ (Class)cellClassForEntryType:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })cellSizeForEntry:(id)a0 dataSource:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;
+ (id)reuseIdentifierForEntryType:(unsigned long long)a0;

@end
