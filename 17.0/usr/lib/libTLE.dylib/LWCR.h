@class NSDictionary, NSData;

@interface LWCR : NSObject {
    NSData *backingStorage;
    struct CEQueryContext { struct der_vm_context { struct CERuntime *x0; struct CEAccelerationContext { struct CEAccelerationElement *x0; unsigned long long x1; } x1; unsigned long long x2; BOOL x3; BOOL x4; union { struct ccder_read_blob { char *x0; char *x1; } x0; struct { char *x0; char *x1; } x1; } x5; } x0; BOOL x1; } *backingContext;
    NSDictionary *_dictionary;
    struct LWCR { long long _version; long long _compatVersion; long long _constraintCat; struct CEQueryContext { struct der_vm_context { struct CERuntime *runtime; struct CEAccelerationContext { struct CEAccelerationElement *index; unsigned long long index_count; } lookup; unsigned long long dictionary_tag; BOOL sorted; BOOL valid; union { struct ccder_read_blob { char *der; char *der_end; } ccstate; struct { char *der_start; char *der_end; } state; } ; } der_context; BOOL managed; } ctx; } lwcr;
}

@property (readonly) long long version;
@property (readonly) long long constraintCategory;
@property (readonly) BOOL hasRequirements;
@property (readonly) NSDictionary *dictionary;

+ (id)withVersion:(long long)a0 withConstraintCategory:(long long)a1 withRequirements:(id)a2 withError:(id *)a3;
+ (id)withData:(id)a0 withError:(id *)a1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)externalRepresentation;

@end
