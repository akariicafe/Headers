@class NSUUID, NSArray, NSString, NSData, NSDictionary;

@interface TISticker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) NSArray *representations;
@property (readonly) long long effectType;
@property (readonly) NSString *name;
@property (readonly) NSString *externalURI;
@property (readonly) NSString *accessibilityLabel;
@property (readonly) NSData *metadata;
@property (readonly) NSDictionary *attributionInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 representations:(id)a1 effectType:(long long)a2 name:(id)a3 externalURI:(id)a4 accessibilityLabel:(id)a5 metadata:(id)a6 attributionInfo:(id)a7;

@end
