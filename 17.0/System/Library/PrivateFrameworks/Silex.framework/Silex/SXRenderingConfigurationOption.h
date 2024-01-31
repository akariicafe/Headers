@class NSString;

@interface SXRenderingConfigurationOption : SXJSONObject <SXRenderingConfigurationOption>

@property (readonly, nonatomic) NSString *minClientSpecVersion;
@property (readonly, nonatomic) NSString *maxClientSpecVersion;
@property (readonly, nonatomic) NSString *minDocumentSpecVersion;
@property (readonly, nonatomic) NSString *maxDocumentSpecVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
