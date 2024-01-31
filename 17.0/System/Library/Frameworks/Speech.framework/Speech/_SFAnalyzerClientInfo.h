@class NSString;

@interface _SFAnalyzerClientInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSString *source;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithID:(id)a0 applicationName:(id)a1 source:(id)a2;

@end
