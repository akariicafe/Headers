@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject <NSCopying> {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_modelVersionHash;
    long long _numRequiredTransactions;
    long long _storeSize;
    long long _logSize;
    long double _logToStoreSizeRatio;
    long long _minLogBytes;
    PFUbiquityKnowledgeVector *_currentBaselineKV;
    PFUbiquityKnowledgeVector *_currentKV;
}

- (id)init;
- (void)dealloc;
- (id)copy;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;

@end
