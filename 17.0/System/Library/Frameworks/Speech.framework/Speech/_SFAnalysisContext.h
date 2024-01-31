@class NSString, NSArray, _TtC6Speech15AnalysisContext;

@interface _SFAnalysisContext : NSObject {
    _TtC6Speech15AnalysisContext *_analysisContext;
}

@property (copy, nonatomic) NSString *geoLMRegionID;
@property (copy, nonatomic) NSArray *contextualNamedEntities;

- (id)init;
- (void).cxx_destruct;
- (id)userDataForKey:(id)a0;
- (id)contextualStringsForKey:(id)a0;
- (id)initWithAnalysisContext:(id)a0;
- (void)setContextualStrings:(id)a0 forKey:(id)a1;
- (void)setUserData:(id)a0 forKey:(id)a1;

@end
