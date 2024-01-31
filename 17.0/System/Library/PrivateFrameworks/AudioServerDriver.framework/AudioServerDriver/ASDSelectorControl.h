@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSelectorControl : ASDControl {
    unsigned int _selectedValue;
    NSMutableArray *_values;
    unsigned long long _numSelected;
    NSObject<OS_dispatch_queue> *_valueQueue;
}

@property (nonatomic) unsigned int selectedValue;
@property (readonly, nonatomic) NSArray *selectedValues;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;
@property (nonatomic) BOOL hasKindProperty;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (void)addValue:(id)a0;
- (void)removeValue:(id)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (void)selectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)values;
- (unsigned int)selectedValue;
- (void)setSelectedValue:(unsigned int)a0;
- (BOOL)changeValue:(unsigned int)a0;
- (id)_findValue:(unsigned int)a0;
- (unsigned long long)_indexOfValue:(unsigned int)a0;
- (void)_updateSelectedValue;
- (unsigned int)baseClass;
- (BOOL)changeValues:(const unsigned int *)a0 withCount:(unsigned long long)a1;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (id)initWithIsSettable:(BOOL)a0 forElement:(unsigned int)a1 inScope:(unsigned int)a2 withPlugin:(id)a3;
- (id)initWithIsSettable:(BOOL)a0 forElement:(unsigned int)a1 inScope:(unsigned int)a2 withPlugin:(id)a3 andObjectClassID:(unsigned int)a4;
- (id)initWithIsSettable:(BOOL)a0 withPlugin:(id)a1;
- (unsigned int)kindForValue:(unsigned int)a0;
- (unsigned int)minDataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)nameForValue:(unsigned int)a0;
- (BOOL)setSelectedValues:(id)a0;
- (BOOL)setSelectedValues:(const unsigned int *)a0 withCount:(unsigned long long)a1;

@end
