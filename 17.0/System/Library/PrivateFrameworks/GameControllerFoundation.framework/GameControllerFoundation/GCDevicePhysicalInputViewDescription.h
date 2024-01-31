@class NSMutableDictionary;

@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary *_additionalConfiguration;
}

- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)validate:(out id *)a0;
- (void).cxx_destruct;

@end
