@class NSMutableData, NSString;

@interface LAManagedACMParameters : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) struct { unsigned int x0; void *x1; unsigned int x2; } *acmParameters;
@property (readonly, nonatomic) unsigned int count;

+ (id)acmParameterWithMaxContinuityAge:(unsigned int)a0;
+ (id)acmParameterWithUserId:(unsigned int)a0;
+ (id)acmParameterSecureIntentSupport;
+ (id)acmParameterWithTimeOffset:(unsigned int)a0;

- (id)acmParameterByAppendingACMParameters:(id)a0;
- (const struct { unsigned int x0; void *x1; unsigned int x2; } *)findACMParameterWithType:(unsigned int)a0;
- (void)_appendACMParameter:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithACMParamType:(unsigned int)a0 bytes:(void *)a1 length:(unsigned long long)a2 description:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
