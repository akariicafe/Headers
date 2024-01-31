@class NSObject, FTLanguageDetectionResponse;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableLanguageDetectionStreamingResponse : FTLanguageDetectionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
