@class NSMutableDictionary, NSDictionary, NSNotificationCenter, _SWCGeneration, _SWCServiceSpecifier;

@interface _SWCServiceSettings : NSObject <SWCRedactedDescription, NSSecureCoding> {
    NSMutableDictionary *_dict;
    unsigned char _hasChanges : 1;
}

@property (class, readonly) NSNotificationCenter *notificationCenter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) _SWCGeneration *generation;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;
@property (readonly) BOOL hasChanges;

+ (BOOL)removeObjectsForKeys:(id)a0 serviceType:(id)a1 error:(id *)a2;
+ (id)serviceSettingsWithServiceSpecifier:(id)a0 error:(id *)a1;
+ (void)postChangeNotificationForServiceSpecifier:(id)a0;
+ (void)serviceSettingsDidChange:(id)a0;
+ (BOOL)removeObjectsForKeys:(id)a0 serviceSpecifier:(id)a1 error:(id *)a2;

- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)commitReturningError:(id *)a0;
- (id)_initWithServiceSpecifier:(id)a0 dictionary:(id)a1 generation:(id)a2;

@end
