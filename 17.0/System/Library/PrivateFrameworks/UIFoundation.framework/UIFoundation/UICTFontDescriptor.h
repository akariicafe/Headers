@interface UICTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)fontAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
