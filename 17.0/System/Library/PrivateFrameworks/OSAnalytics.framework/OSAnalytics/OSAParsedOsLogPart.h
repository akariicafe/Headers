@class NSString;

@interface OSAParsedOsLogPart : NSObject

@property (readonly) BOOL isImmutable;
@property (readonly, copy) NSString *stringValue;
@property (readonly) BOOL isArgument;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIntegerArgumentStringValue:(id)a0;
- (id)initWithLiteral:(id)a0 isImmutable:(BOOL)a1;
- (id)initWithStringArgument:(id)a0 isImmutable:(BOOL)a1;

@end
