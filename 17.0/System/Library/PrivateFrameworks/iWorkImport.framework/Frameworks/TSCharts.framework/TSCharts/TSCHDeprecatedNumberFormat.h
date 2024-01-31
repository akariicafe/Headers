@interface TSCHDeprecatedNumberFormat : NSObject <TSSPropertyValueArchiving>

+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
+ (id)upgradedNumberFormatFromArchive:(const void *)a0 unarchiver:(id)a1;

- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;

@end
