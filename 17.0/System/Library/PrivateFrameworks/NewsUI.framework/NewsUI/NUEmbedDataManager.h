@class NSString, SXJSONDictionary;
@protocol NUEmbedConfigurationLoader;

@interface NUEmbedDataManager : NSObject <NUEmbedDataManager>

@property (readonly, nonatomic) id<NUEmbedConfigurationLoader> embedConfigurationLoader;
@property (retain, nonatomic) SXJSONDictionary *embedConfiguration;
@property (readonly, nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
