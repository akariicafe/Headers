@class NSArray, NSString, NSIndexSet;
@protocol _CDPDataHarvester;

@interface _CDPSimpleModel : NSObject <_CDPModel> {
    BOOL _loaded;
    BOOL _scoresAreDirty;
    unsigned long long _NEmail;
    unsigned long long _size;
    unsigned long long _NPeople;
    double *_timestamp;
    BOOL *_userIsSender;
    BOOL *_userIsThreadInitiator;
    unsigned int **_email;
    unsigned long long *_emailLength;
    float *_email2LogScore;
    unsigned int **_people2Email;
    unsigned long long *_people2EmailLength;
    NSArray *_people;
    NSIndexSet *_testingIndices;
}

@property (readonly, nonatomic) unsigned long long nPeople;
@property (readonly, nonatomic) unsigned long long nEmail;
@property (readonly, nonatomic) NSArray *people;
@property (retain, nonatomic) id<_CDPDataHarvester> harvester;
@property (readonly, nonatomic) float lambda;
@property (readonly, nonatomic) float w0;
@property (nonatomic) BOOL requireOutgoingInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)maxNumberOfEmailsSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadModel:(id /* block */)a0;
- (id)_testingIndices;
- (unsigned int *)_newIdsForPeople:(id)a0 length:(unsigned long long *)a1;
- (struct _cdp_prediction_result { int x0; float x1; int x2; int x3; } *)_newPredictionResultWithSeed:(unsigned int *)a0 seedLength:(unsigned long long)a1 realSeedLength:(unsigned long long)a2 maxTrainingEmailID:(unsigned int)a3;
- (void)_printEmailWithID:(unsigned long long)a0;
- (void)_printPrediction:(struct _cdp_prediction_result { int x0; float x1; int x2; int x3; } *)a0;
- (void)_printUserWithID:(unsigned long long)a0;
- (void)_printUsers:(unsigned int *)a0 length:(unsigned long long)a1;
- (void)_reallocModel;
- (void)getEmail:(unsigned int **)a0 emailLength:(unsigned long long *)a1 atIndex:(unsigned long long)a2;
- (void)makePredictionForGroup:(id)a0 clientType:(long long)a1 limit:(long long)a2 completionHandler:(id /* block */)a3;
- (id)peopleWithID:(unsigned int)a0;
- (void)setLambda:(float)a0 w0:(float)a1;

@end
