@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;

@end
