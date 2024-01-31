@class NSString;

@interface SFAccountListSectionIdentifier : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *footerText;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 headerText:(id)a1 footerText:(id)a2;

@end
