@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (retain, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *requestToken;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1;

@end
