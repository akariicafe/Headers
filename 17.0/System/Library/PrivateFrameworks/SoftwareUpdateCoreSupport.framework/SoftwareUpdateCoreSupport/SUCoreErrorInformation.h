@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreErrorInformation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *informationQueue;
@property (readonly, nonatomic) NSMutableDictionary *layerInformation;
@property (readonly, nonatomic) NSMutableDictionary *errorInformation;
@property (readonly, nonatomic) NSArray *safeUserInfoValues;

+ (void)attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2;
+ (void)attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2 indicating:(long long)a3;
+ (id)codeNameForDomain:(id)a0 withCode:(long long)a1;
+ (id)safeUserInfoValueClasses;
+ (void)associateLayer:(long long)a0 withDomain:(id)a1 indicating:(long long)a2 ifKeyTrue:(id)a3;
+ (long long)layerForError:(id)a0;
+ (id)nameForSUCoreLayer:(long long)a0;
+ (id)sharedErrorInformation;
+ (void)attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2 indicating:(long long)a3 ifKeyTrue:(id)a4 keyMatchTrueMap:(id)a5;
+ (id)codeNameForError:(id)a0;
+ (void)associateLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3;
+ (void)associateLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3 indicating:(long long)a4 ifKeyTrue:(id)a5 keyMatchTrueMap:(id)a6;
+ (long long)indicationsForError:(id)a0 matchingMask:(long long)a1;
+ (id)nameForSUCoreCode:(long long)a0;
+ (void)attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2 keyMatchTrueMap:(id)a3;
+ (void)associateLayer:(long long)a0 withDomain:(id)a1 keyMatchTrueMap:(id)a2;
+ (id)summaryOfIndications:(long long)a0;
+ (void)attributesOfSUCoreErrorCode:(long long)a0 indicating:(long long)a1;
+ (long long)allIndicationsForError:(id)a0;
+ (void)associateLayer:(long long)a0 withDomain:(id)a1;
+ (void)attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2 indicating:(long long)a3 ifKeyTrue:(id)a4;
+ (id)setupCoreErrorInformation;

- (id)init;
- (void)_associateLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3 indicating:(long long)a4 ifKeyTrue:(id)a5 keyMatchTrueMap:(id)a6;
- (void)_associateLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3;
- (void)_defineErrorLayers;
- (void).cxx_destruct;
- (void)_attributesOfErrorForDomain:(id)a0 withCode:(long long)a1 codeName:(id)a2 indicating:(long long)a3 ifKeyTrue:(id)a4 keyMatchTrueMap:(id)a5;

@end
