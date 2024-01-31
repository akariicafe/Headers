@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject

@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (nonatomic) BOOL destructiveSecondaryString;
@property (retain, nonatomic) NSString *badgeString;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) BOOL shouldGrayValue;
@property (nonatomic) BOOL shouldStrikeValue;
@property (nonatomic) BOOL shouldShowDisclosure;
@property (retain, nonatomic) NSString *secondaryBadgeSymbol;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
