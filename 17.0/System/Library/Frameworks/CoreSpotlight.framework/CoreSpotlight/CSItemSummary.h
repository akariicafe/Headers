@class NSString, NSArray, NSPersonNameComponents, NSDate, CSSearchableItem;

@interface CSItemSummary : NSObject <NSCopying, NSSecureCoding> {
    NSString *_type;
    NSString *_name;
    NSString *_contactIdentifier;
    NSPersonNameComponents *_nameComponents;
    NSArray *_alternateNames;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_allEmailAddresses;
    long long _contactScope;
    NSDate *_dateFrom;
    NSDate *_dateTo;
    NSString *_textQuery;
    long long _textScope;
    long long _statusValue;
    NSString *_attachmentQuery;
    long long _attachmentScope;
    NSString *_senderContainsQuery;
    NSString *_senderContainsSearchString;
    long long _senderContainsScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) CSSearchableItem *sourceItem;

- (id)nameComponents;
- (void)setNameComponents:(id)a0;
- (id)emailAddresses;
- (id)phoneNumbers;
- (void)encodeWithCoder:(id)a0;
- (id)contactIdentifier;
- (void).cxx_destruct;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)allEmailAddresses;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(long long)a0;
- (id)alternateNames;
- (id)attachmentQuery;
- (long long)attachmentScope;
- (long long)contactScope;
- (id)dateFrom;
- (id)dateTo;
- (id)initWithAttachmentQuery:(id)a0 attachmentScope:(long long)a1;
- (id)initWithDateFrom:(id)a0 dateTo:(id)a1;
- (id)initWithItemSummary:(id)a0 newContactScope:(long long)a1;
- (id)initWithItemSummaryType:(id)a0;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 alternateNames:(id)a2 phoneNumbers:(id)a3 emailAddresses:(id)a4 allEmailAddresses:(id)a5 contactScope:(long long)a6;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 alternateNames:(id)a2 phoneNumbers:(id)a3 emailAddresses:(id)a4 allEmailAddresses:(id)a5 nameComponents:(id)a6 contactScope:(long long)a7;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 alternateNames:(id)a2 phoneNumbers:(id)a3 emailAddresses:(id)a4 contactScope:(long long)a5;
- (id)initWithSenderContainsQuery:(id)a0 senderContainsSearchString:(id)a1 senderContainsScope:(long long)a2;
- (id)initWithTextQuery:(id)a0 textScope:(long long)a1;
- (id)senderContainsQuery;
- (long long)senderContainsScope;
- (id)senderContainsSearchString;
- (long long)statusValue;
- (id)textQuery;
- (long long)textScope;

@end
