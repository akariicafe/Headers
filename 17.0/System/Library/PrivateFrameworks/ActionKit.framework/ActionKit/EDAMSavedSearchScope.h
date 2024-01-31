@class NSNumber;

@interface EDAMSavedSearchScope : FATObject

@property (retain, nonatomic) NSNumber *includeAccount;
@property (retain, nonatomic) NSNumber *includePersonalLinkedNotebooks;
@property (retain, nonatomic) NSNumber *includeBusinessLinkedNotebooks;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
