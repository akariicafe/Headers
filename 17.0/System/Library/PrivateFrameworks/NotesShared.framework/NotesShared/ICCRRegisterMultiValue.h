@class ICCRSet, NSSet;

@interface ICCRRegisterMultiValue : ICCRRegister

@property (retain, nonatomic) ICCRSet *values;
@property (retain, nonatomic) NSSet *cachedValues;

- (id)contents;
- (void)walkGraph:(id /* block */)a0;
- (void)setContents:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)description;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (id)allContents;
- (id)initWithContents:(id)a0 document:(id)a1;
- (void)mergeWithRegisterMultiValue:(id)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;

@end
