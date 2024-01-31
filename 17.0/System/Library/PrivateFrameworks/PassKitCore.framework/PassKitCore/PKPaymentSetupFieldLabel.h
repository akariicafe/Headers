@class NSString, NSArray;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailBody;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName;
@property (nonatomic) unsigned long long alingment;
@property (copy, nonatomic) NSArray *links;
@property (readonly, copy, nonatomic) NSString *title;

- (id)displayString;
- (void)setCurrentValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonUpdate;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
