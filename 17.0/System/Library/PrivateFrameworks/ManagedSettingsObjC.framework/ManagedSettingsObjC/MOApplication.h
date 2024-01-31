@class NSString;

@interface MOApplication : NSObject <MOPersistable, NSCopying>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *bundleIdentifier;

+ (id)initializeWithPersistableValue:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
