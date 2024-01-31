@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDSliderControl : ASDControl {
    unsigned int _value;
    struct _ASDSliderRange { unsigned int mMinimum; unsigned int mMaximum; } _range;
    NSObject<OS_dispatch_queue> *_valueQueue;
}

@property (nonatomic) unsigned int value;
@property (nonatomic) struct _ASDSliderRange { unsigned int x0; unsigned int x1; } range;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;

+ (id)sliderControlWithValue:(unsigned int)a0 andRange:(struct _ASDSliderRange { unsigned int x0; unsigned int x1; })a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 withPlugin:(id)a5;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (struct _ASDSliderRange { unsigned int x0; unsigned int x1; })range;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)initWithPlugin:(id)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (void)setRange:(struct _ASDSliderRange { unsigned int x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (unsigned int)value;
- (void)setValue:(unsigned int)a0;
- (BOOL)changeValue:(unsigned int)a0;
- (unsigned int)baseClass;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (id)initWithValue:(unsigned int)a0 andRange:(struct _ASDSliderRange { unsigned int x0; unsigned int x1; })a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 withPlugin:(id)a5;
- (id)initWithValue:(unsigned int)a0 andRange:(struct _ASDSliderRange { unsigned int x0; unsigned int x1; })a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 withPlugin:(id)a5 andObjectClassID:(unsigned int)a6;

@end
