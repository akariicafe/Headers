@class NSString, NSArray;

@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSArray *fields;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)initializeWithModel:(id)a0;

@end
