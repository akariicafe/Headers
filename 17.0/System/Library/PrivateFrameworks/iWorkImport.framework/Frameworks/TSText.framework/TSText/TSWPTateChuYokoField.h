@interface TSWPTateChuYokoField : TSWPSmartField

- (BOOL)allowsEditing;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned short)smartFieldKind;

@end
