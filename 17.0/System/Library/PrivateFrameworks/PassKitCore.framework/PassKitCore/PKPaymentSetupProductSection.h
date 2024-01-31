@class NSString, NSArray;

@interface PKPaymentSetupProductSection : NSObject

@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSArray *categories;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
