@class NSString, AgeDateTime, PostalAddress;

@interface ContactAttribute : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long contactAttributeType;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *handleValue;
@property (nonatomic, retain) AgeDateTime *ageDateTime;
@property (nonatomic, retain) PostalAddress *postalAddress;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
