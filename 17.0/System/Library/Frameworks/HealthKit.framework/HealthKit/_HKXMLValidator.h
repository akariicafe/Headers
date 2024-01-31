@interface _HKXMLValidator : NSObject {
    struct _xmlSchema { char *x0; char *x1; char *x2; char *x3; struct _xmlDoc *x4; struct _xmlSchemaAnnot *x5; int x6; struct _xmlHashTable *x7; struct _xmlHashTable *x8; struct _xmlHashTable *x9; struct _xmlHashTable *x10; struct _xmlHashTable *x11; struct _xmlHashTable *x12; void *x13; struct _xmlHashTable *x14; struct _xmlDict *x15; void *x16; int x17; int x18; struct _xmlHashTable *x19; void *x20; } *_xsdSchema;
}

+ (id)validatorWithPathToXSD:(id)a0;
+ (id)validatorWithXSD:(id)a0;

- (void)dealloc;
- (id)_initWithSchema:(struct _xmlSchema { char *x0; char *x1; char *x2; char *x3; struct _xmlDoc *x4; struct _xmlSchemaAnnot *x5; int x6; struct _xmlHashTable *x7; struct _xmlHashTable *x8; struct _xmlHashTable *x9; struct _xmlHashTable *x10; struct _xmlHashTable *x11; struct _xmlHashTable *x12; void *x13; struct _xmlHashTable *x14; struct _xmlDict *x15; void *x16; int x17; int x18; struct _xmlHashTable *x19; void *x20; } *)a0;
- (BOOL)validateXML:(id)a0 simpleError:(id *)a1 detailedErrors:(id *)a2;

@end
