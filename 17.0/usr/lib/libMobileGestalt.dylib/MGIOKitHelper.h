@interface MGIOKitHelper : NSObject {
    unsigned int devIterator;
}

- (id)init;
- (void)dealloc;
- (struct __CFBoolean { } *)copyBooleanFromServiceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (struct __CFData { } *)copyDataFromDeviceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (struct __CFData { } *)copyDataFromServiceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (void *)copyDeviceTreeProperty:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (unsigned int)copyDeviceTreeStructureNext:(id)a0 withFirstChar:(char)a1;
- (struct __CFNumber { } *)copyNumberFromData:(struct __CFData { } *)a0;
- (struct __CFNumber { } *)copyNumberFromDeviceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (void *)copyPropertyFromServiceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (void *)copyServiceTreeProperty:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (struct __CFString { } *)copyStringFromDeviceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (struct __CFString { } *)copyStringFromServiceTree:(id)a0 withFirstChar:(char)a1 propertyName:(id)a2 withPropertyFirstChar:(char)a3;
- (BOOL)createServicesIteratorByNameMatch:(const char *)a0;
- (BOOL)createTreeIterator:(const char *)a0;
- (void)deleteIterator;
- (struct __CFDictionary { } *)deviceTreeNodeIsPresent:(struct __CFString { } *)a0 withExactName:(BOOL)a1 withNodeClass:(struct __CFString { } *)a2;
- (struct __CFArray { } *)iteratorCopyBusyServiceNames;

@end
