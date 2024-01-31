@class NSString;

@interface UIDictationConnectionOptions : NSObject

@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long activationType;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) NSString *activationIdentifier;
@property (copy, nonatomic) NSString *layoutIdentifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL secureInput;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) id turnIdentifier;
@property (nonatomic) BOOL autoPunctuation;

- (void).cxx_destruct;

@end
