@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding> {
    struct SWCSubstitutionVariable { unsigned char terminator : 1; unsigned char includesEmptyValue : 1; unsigned char allValuesAreOneCharLong : 1; char cStrings[0]; } _variables[0];
}

@property (class, readonly) _SWCSubstitutionVariableList *cheapBuiltInSubstitutionVariableList;
@property (class, readonly) _SWCSubstitutionVariableList *expensiveBuiltInSubstitutionVariableList;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)substitutionVariableListWithDictionary:(id)a0;

- (unsigned long long)hash;
- (id)redactedDescription;
- (id)_descriptionDebug:(BOOL)a0 redacted:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)enumerateSubstitutionVariablesWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;

@end
