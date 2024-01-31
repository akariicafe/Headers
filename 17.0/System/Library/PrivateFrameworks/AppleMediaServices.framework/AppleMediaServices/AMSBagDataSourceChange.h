@class NSString, NSDictionary, NSSet, NSDate;

@interface AMSBagDataSourceChange : NSObject

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *loadedBagIdentifier;
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier;
@property (readonly, nonatomic) NSDictionary *originalData;
@property (readonly, nonatomic) NSDate *originalExpirationDate;
@property (readonly, nonatomic) NSString *profile;
@property (readonly, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) NSDictionary *updatedData;
@property (readonly, nonatomic) NSDate *updatedExpirationDate;
@property (readonly, nonatomic) NSSet *changedKeys;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 originalData:(id)a2 originalExpirationDate:(id)a3 updatedData:(id)a4 updatedExpirationDate:(id)a5 changedKeys:(id)a6 loadedBagIdentifier:(id)a7 loadedBagPartialIdentifier:(id)a8 accountIdentifier:(id)a9;

@end
