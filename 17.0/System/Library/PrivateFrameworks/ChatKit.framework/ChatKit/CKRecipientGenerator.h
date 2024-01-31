@class NSArray;

@interface CKRecipientGenerator : NSObject

@property (retain, nonatomic) NSArray *searchABPropertyTypes;

+ (id)sharedRecipientGenerator;

- (void).cxx_destruct;
- (void)getAddressForContact:(id)a0 address:(id *)a1 kind:(unsigned long long *)a2;
- (id)recipientWithAddress:(id)a0;
- (id)recipientWithContact:(id)a0;
- (id)recipientWithContactProperty:(id)a0;

@end
