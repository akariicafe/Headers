@class NSString, NSPersonNameComponents;

@interface PNPersonSuggestion : NSObject

@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *nameString;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL isMe;
@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long suggestionSource;
@property (nonatomic) long long attribution;
@property (readonly, nonatomic) NSString *autonamingFeedbackStandardNameRepresentation;

+ (id)suggestionWithPersonLocalIdentifier:(id)a0 meContactIdentifier:(id)a1;
+ (id)suggestionWithPersonLocalIdentifier:(id)a0 personView:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
