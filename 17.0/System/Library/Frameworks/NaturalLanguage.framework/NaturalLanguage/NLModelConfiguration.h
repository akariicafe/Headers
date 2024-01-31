@class NSString, NSDictionary;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    unsigned long long _revision;
    NSString *_language;
    NSDictionary *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;

+ (id)supportedRevisionsForType:(long long)a0;
+ (unsigned long long)currentRevisionForType:(long long)a0;
+ (id)defaultModelConfigurationForType:(long long)a0;
+ (id)defaultModelConfigurationForType:(long long)a0 options:(id)a1 error:(id *)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)options;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)embeddingData;
- (id)embeddingModel;
- (id)embeddingURL;
- (id)initWithModelType:(long long)a0 options:(id)a1 error:(id *)a2;

@end
