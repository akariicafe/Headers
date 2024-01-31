@class NSString, NSArray;
@protocol SFCardSection;

@interface SiriUILegacyCardSection : NSObject <CRCardSection>

@property (retain, nonatomic) NSString *cardSectionIdentifier;
@property (readonly, nonatomic) id<SFCardSection> backingCardSection;
@property (readonly, nonatomic) NSArray *actionCommands;
@property (readonly, nonatomic) BOOL hasNextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
