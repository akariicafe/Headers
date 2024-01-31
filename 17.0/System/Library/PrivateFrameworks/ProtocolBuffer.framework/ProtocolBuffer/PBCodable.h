@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;

+ (id)options;

- (id)init;
- (id)formattedText;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;

@end
