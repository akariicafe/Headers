@class NSString, NSMutableDictionary, NSDate;

@interface RedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, AdditionalInfoProtocol> {
    NSString *_originalURLKey;
    NSString *_redirectURLKey;
    unsigned int _ignoreFor;
    unsigned int _maxCount;
    double _maxAge;
    NSMutableDictionary *_ignoredDestinations;
    unsigned int _numIgnored;
    double _numIgnoredScaleFactor;
    NSString *_currentRedirectURL;
    NSMutableDictionary *_redirectedOrigins;
    NSMutableDictionary *_requestingPids;
    NSDate *_pruningTime;
    unsigned int _numNegatives;
    id _resetObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)noteSymptom:(id)a0;
+ (id)_sharedInstance;
+ (id)generateAdditionalInfo:(id)a0;
+ (id)evaluate:(id)a0 forThreshold:(long long)a1;
+ (id)configureClass:(id)a0;

- (id)init;
- (void)_addRedirectFrom:(id)a0 To:(id)a1 by:(unsigned long long)a2 atTime:(unsigned int)a3;
- (BOOL)noteSymptom:(id)a0;
- (int)configureInstance:(id)a0;
- (void)_reset:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)_pruneDir:(id)a0;
- (void)performNegativeFeedback:(id)a0;
- (void).cxx_destruct;
- (id)generateAdditionalInfo:(id)a0;
- (void)_prune;
- (id)evaluate:(id)a0 forThreshold:(long long)a1;

@end
