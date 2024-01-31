@class NSString;

@interface Speech.AnalysisContext : NSObject {
    void /* unknown type, empty encoding */ contextualStrings;
    void /* unknown type, empty encoding */ userData;
    void /* unknown type, empty encoding */ contextualStringsMutex;
    void /* unknown type, empty encoding */ userDataMutex;
    void /* unknown type, empty encoding */ contextDelegatesMutex;
}

@property (nonatomic, copy) NSString *geoLMRegionID;

- (id)init;
- (void).cxx_destruct;
- (id)_contextualStringsForKey:(id)a0;
- (void)_setContextualStrings:(id)a0 forKey:(id)a1;
- (void)_setUserData:(id)a0 forKey:(id)a1;
- (id)_userDataForKey:(id)a0;

@end
