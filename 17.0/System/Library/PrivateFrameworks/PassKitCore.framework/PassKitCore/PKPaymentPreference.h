@class NSString, NSMutableDictionary, NSArray;

@interface PKPaymentPreference : NSObject

@property (retain, nonatomic) NSMutableDictionary *errors;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footerLinkRange;
@property (copy, nonatomic) id /* block */ footerLinkActionBlock;
@property (copy, nonatomic) NSArray *preferences;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long pendingIndex;
@property (nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) BOOL supportsDeletion;

- (void).cxx_destruct;
- (void)clearAllErrors;
- (id)errorsForPreference:(id)a0;
- (id)initWithTitle:(id)a0 preferences:(id)a1 selectedIndex:(unsigned long long)a2 readOnly:(BOOL)a3;
- (BOOL)preferenceObject:(id)a0 representsContact:(id)a1;
- (void)setErrors:(id)a0 forPreference:(id)a1;

@end
