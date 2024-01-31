@class NSString, NSMutableData;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder> {
    Class _rootClass;
    BSProtobufSchema *_superSchema;
    long long _fieldCount;
    long long _autotagIndex;
    struct _BSProtobufFieldEntry { unsigned int x0; char *x1; long long x2; struct objc_ivar *x3; Class x4; Class x5; void /* function */ *x6; void /* function */ *x7; struct { long long x0; struct _BSProtobufFieldEntry **x1; struct _BSProtobufFieldEntry *x2; } x8; BOOL x9; } *_entries;
    NSMutableData *_memoryData;
    BOOL _respondsToDidFinishProtobufDecodingWithError;
    BOOL _respondsToInitForProtobufDecoding;
    BOOL _respondsToInitProtobufTranslatorForObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addField:(const char *)a0 forTag:(long long)a1;
- (void)addField:(const char *)a0 allowedClasses:(id)a1;
- (void)addField:(const char *)a0;
- (void)addRepeatingField:(const char *)a0 containsClasses:(id)a1;
- (void)addRepeatingField:(const char *)a0 containsClass:(Class)a1;
- (void)addRepeatingField:(const char *)a0 containsClass:(Class)a1 forTag:(long long)a2;

@end
