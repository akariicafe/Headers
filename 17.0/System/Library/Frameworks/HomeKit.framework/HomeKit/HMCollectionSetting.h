@class NSSet;

@interface HMCollectionSetting : HMSetting <NSFastEnumeration>

@property (readonly, copy) NSSet *itemValueClasses;

+ (void)setItemValueClasses:(id)a0 forKeyPath:(id)a1;
+ (id)defaultItemValueClasses;
+ (id)itemValueClassesForKeyPath:(id)a0;
+ (void)setItemValueClass:(Class)a0 forKeyPath:(id)a1;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setItemValueClass:(Class)a0;
- (void)setItemValueClasses:(id)a0;

@end
