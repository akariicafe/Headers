@class NSString, NSArray, NSData, NSDictionary;

@interface _UISticker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *representations;
@property (nonatomic) long long effectType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *externalURI;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSDictionary *attributionInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
