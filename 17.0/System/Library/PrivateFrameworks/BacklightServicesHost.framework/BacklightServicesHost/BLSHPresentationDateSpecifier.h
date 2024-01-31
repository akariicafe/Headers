@class NSArray, NSString, NSDate;

@interface BLSHPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying>

@property (readonly, nonatomic) NSDate *presentationDate;
@property (readonly, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithPresentationDate:(id)a0 specifiers:(id)a1;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresentationDate:(id)a0 specifiers:(id)a1;
- (id)dateSpecifierForEnvironment:(id)a0;
- (void)enumerateDateSpecifiersUsingBlock:(id /* block */)a0;

@end
