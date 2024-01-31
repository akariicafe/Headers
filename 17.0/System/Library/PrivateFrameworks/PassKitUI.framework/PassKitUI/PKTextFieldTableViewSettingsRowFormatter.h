@class NSSet;

@interface PKTextFieldTableViewSettingsRowFormatter : NSObject

@property (copy, nonatomic) NSSet *formatPaddingCharacters;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)formattedValueFromInput:(id)a0;
- (id)submissionValueFromFormattedInput:(id)a0;

@end
