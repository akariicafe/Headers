@class NSString, NSNumber;

@interface SGMailIntelligenceWarning : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *snippet;
@property (readonly, nonatomic) NSString *core;
@property (readonly, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSString *detectedLanguage;
@property (readonly, nonatomic) BOOL isIncomingMessage;
@property (readonly, nonatomic) NSNumber *score;

+ (id)snippetFromString:(id)a0 coreRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withMaxWindowSizeAroundCore:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromString:(id)a0 coreRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 signature:(id)a2 maxWindowSizeAroundCore:(unsigned long long)a3 detectedLanguage:(id)a4 isIncomingMessage:(BOOL)a5 score:(id)a6;
- (id)initWithSnippet:(id)a0 core:(id)a1 signature:(id)a2 detectedLanguage:(id)a3 isIncomingMessage:(BOOL)a4 score:(id)a5;

@end
