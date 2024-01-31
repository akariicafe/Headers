@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDBooleanControl : ASDControl {
    BOOL _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
}

@property (nonatomic) BOOL value;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;

+ (id)invertControlWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4;
+ (id)jackControlWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4;
+ (id)muteControlWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4;
+ (id)phantomPowerControlWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)initWithPlugin:(id)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (void).cxx_destruct;
- (BOOL)value;
- (void)setValue:(BOOL)a0;
- (BOOL)changeValue:(BOOL)a0;
- (unsigned int)baseClass;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (id)initWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4;
- (id)initWithValue:(BOOL)a0 isSettable:(BOOL)a1 forElement:(unsigned int)a2 inScope:(unsigned int)a3 withPlugin:(id)a4 andObjectClassID:(unsigned int)a5;

@end
