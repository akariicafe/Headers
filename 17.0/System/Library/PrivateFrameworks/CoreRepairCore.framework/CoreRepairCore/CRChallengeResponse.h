@class NSString, NSDictionary, NSData, NSNumber;

@interface CRChallengeResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *identifer;
@property (retain, nonatomic) NSData *signedResponse;
@property (retain, nonatomic) NSNumber *keyIndex;
@property (retain, nonatomic) NSDictionary *properties;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComponentType:(id)a0 identifer:(id)a1 signedResponse:(id)a2 keyIndex:(id)a3 properties:(id)a4;

@end
