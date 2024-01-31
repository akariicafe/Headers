@class QSSStreamingTranslationRequest;

@interface QSSMutableStreamingTranslationStreamingRequest : QSSStreamingTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStreamingTranslationRequest *contentAsQSSStreamingTranslationRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
