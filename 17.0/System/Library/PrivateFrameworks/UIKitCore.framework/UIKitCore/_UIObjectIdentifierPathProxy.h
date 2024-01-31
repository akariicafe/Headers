@class NSString;

@interface _UIObjectIdentifierPathProxy : NSObject <NSSecureCoding> {
    NSString *_identifierPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
