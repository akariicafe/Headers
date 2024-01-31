@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (copy, nonatomic) id /* block */ dataSourceChangedHandler;
@property (copy, nonatomic) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueForURLVariable:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)defaultValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)_initWithProfile:(id)a0 profileVersion:(id)a1 data:(id)a2 expirationDate:(id)a3 processInfo:(id)a4 defaultValues:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
