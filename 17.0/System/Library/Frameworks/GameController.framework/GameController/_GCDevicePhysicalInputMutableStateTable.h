@class NSPointerArray;

@interface _GCDevicePhysicalInputMutableStateTable : NSObject <NSCopying> {
    NSPointerArray *_primitiveState;
    NSPointerArray *_objectPolicyState;
    NSPointerArray *_objectState;
}

@property (readonly) unsigned short magic;
@property (readonly) unsigned int primitiveSlotCount;
@property (readonly) unsigned int objectSlotCount;

- (id)init;
- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectValueAtIndex:(unsigned int)a0;
- (unsigned long long)primitiveValueAtIndex:(unsigned int)a0;
- (void)setObjectValue:(id)a0 atIndex:(unsigned int)a1 policy:(unsigned long long)a2;
- (void)setPrimitiveValue:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (BOOL)testAndSetObjectValue:(id)a0 atIndex:(unsigned int)a1 policy:(unsigned long long)a2 compareObjects:(BOOL)a3 previous:(id *)a4;
- (BOOL)testAndSetPrimitiveValue:(unsigned long long)a0 atIndex:(unsigned int)a1 previous:(unsigned long long *)a2;

@end
