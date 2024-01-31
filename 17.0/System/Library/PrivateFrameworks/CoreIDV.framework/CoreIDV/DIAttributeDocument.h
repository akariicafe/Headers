@class NSArray, NSString;

@interface DIAttributeDocument : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long acceptableDocTypes;
@property (copy, nonatomic) NSArray *acceptableDocs;
@property (nonatomic) NSString *idDocType;
@property (nonatomic) unsigned long long docType;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAcceptableDocs:(id)a0;

@end
