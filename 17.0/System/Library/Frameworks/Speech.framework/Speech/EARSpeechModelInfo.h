@class NSString, NSSet;

@interface EARSpeechModelInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSSet *samplingRates;
@property (readonly, nonatomic) NSSet *tasks;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *phoneSetVersion;
@property (readonly, nonatomic) NSString *acousticProfileVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModelInfo:(id)a0;

@end
