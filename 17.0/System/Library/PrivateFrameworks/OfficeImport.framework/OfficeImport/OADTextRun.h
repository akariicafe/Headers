@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)init;
- (void)setProperties:(id)a0;
- (id)properties;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
