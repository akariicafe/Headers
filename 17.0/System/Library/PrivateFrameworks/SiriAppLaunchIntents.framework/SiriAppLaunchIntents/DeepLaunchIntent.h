@class Application, NSString, NSArray;

@interface DeepLaunchIntent : INIntent

@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, copy) NSArray *pageCanonicalNames;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
