@interface USOSerializedUtteranceSpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int startIndex;
@property (readonly) unsigned int endIndex;
@property (readonly) unsigned int startUnicodeScalarIndex;
@property (readonly) unsigned int endUnicodeScalarIndex;
@property (readonly) int startMilliSeconds;
@property (readonly) int endMilliSeconds;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1 startUnicodeScalarIndex:(unsigned int)a2 endUnicodeScalarIndex:(unsigned int)a3 startMilliSeconds:(int)a4 endMilliSeconds:(int)a5;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1 startUnicodeScalarIndex:(unsigned int)a2 endUnicodeScalarIndex:(unsigned int)a3;

@end
