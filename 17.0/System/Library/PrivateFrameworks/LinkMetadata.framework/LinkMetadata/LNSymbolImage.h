@class NSString, NSData, LNSymbolConfiguration;

@interface LNSymbolImage : LNImage

@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSData *tintColorData;
@property (readonly, nonatomic) NSData *configurationData;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) LNSymbolConfiguration *platformAgnosticSymbolConfiguration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbolSystemName:(id)a0;
- (id)initWithSymbolSystemName:(id)a0 tintColorData:(id)a1 configurationData:(id)a2 platform:(id)a3;
- (id)initWithSymbolSystemName:(id)a0 tintColorData:(id)a1 platformAgnosticConfiguration:(id)a2 platform:(id)a3;
- (id)proxiedImageCopy;

@end
